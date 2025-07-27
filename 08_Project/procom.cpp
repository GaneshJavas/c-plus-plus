#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

string getProductNameByID(const vector<Product>& products, int id) {
    for (const auto& product : products) {
        if (product.productID == id)
            return product.name;
    }
    return "Unknown";
}

void viewOrdersByCustomer(const unordered_map<string, string>& customerDirectory,
                          const multimap<string, Order>& customerOrders,
                          const vector<Product>& products) {
    cout << "\n--- Orders Per Customer ---\n";
    for (const auto& [customerID, customerName] : customerDirectory) {
        auto range = customerOrders.equal_range(customerID);
        bool hasOrders = false;

        for (auto it = range.first; it != range.second; ++it) {
            if (!hasOrders) {
                cout << "\nCustomer: " << customerName << " (" << customerID << ")\n";
                hasOrders = true;
            }

            string prodName = getProductNameByID(products, it->second.ProductID);
            cout << "  Order ID: " << it->second.orderID
                 << ", Product: " << prodName
                 << ", Quantity: " << it->second.quantity
                 << ", Date: " << put_time(localtime(&it->second.orderDate), "%Y-%m-%d %H:%M:%S")
                 << "\n";
        }

        if (!hasOrders) {
            cout << "\nCustomer: " << customerName << " (" << customerID << ") has no orders.\n";
        }
    }
}

void checkLowStock(const map<int, int>& productStock, const vector<Product>& products) {
    cout << "\n--- Low Stock / Out of Stock Products ---\n";
    for (const auto& [productID, stock] : productStock) {
        if (stock <= 5) {
            cout << "Product: " << getProductNameByID(products, productID)
                 << " (ID: " << productID << "), Stock Left: " << stock << "\n";
        }
    }
}

void showProductCatalog(const vector<Product>& products) {
    set<string> categories;
    for (const auto& p : products)
        categories.insert(p.category);

    cout << "\n--- Product Catalog by Category ---\n";
    for (const auto& cat : categories) {
        cout << "\nCategory: " << cat << "\n";
        for (const auto& p : products) {
            if (p.category == cat)
                cout << "  Product ID: " << p.productID << ", Name: " << p.name << "\n";
        }
    }
}

void placeOrder(int& nextOrderID,
                const unordered_map<string, string>& customerDirectory,
                const vector<Product>& products,
                map<int, int>& productStock,
                multimap<string, Order>& customerOrders) {
    string custID;
    cout << "\nEnter Customer ID: ";
    cin >> custID;

    if (customerDirectory.find(custID) == customerDirectory.end()) {
        cout << "Customer not found.\n";
        return;
    }

    int prodID;
    cout << "Enter Product ID: ";
    cin >> prodID;

    bool found = false;
    for (const auto& p : products) {
        if (p.productID == prodID) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Invalid product ID.\n";
        return;
    }

    int qty;
    cout << "Enter Quantity: ";
    cin >> qty;

    if (productStock[prodID] < qty) {
        cout << "Insufficient stock! Available: " << productStock[prodID] << "\n";
        return;
    }

    // Place order
    Order newOrder = {nextOrderID++, prodID, qty, custID, time(0)};
    customerOrders.insert({custID, newOrder});
    productStock[prodID] -= qty;

    cout << "Order placed successfully!\n";
}

int main() {
    vector<Product> products = {
        {101, "Product1", "Category1"},
        {102, "Product2", "Category1"},
        {103, "Product3", "Category2"},
        {104, "Product4", "Category2"},
        {105, "Product5", "Category3"},
    };

    unordered_map<string, string> customerDirectory = {
        {"C001", "Jai"},
        {"C002", "Vipin"},
        {"C003", "Amit"},
        {"C004", "Satyam"},
        {"C005", "Gulshan"},
    };

    map<int, int> productStock = {
        {101, 10},
        {102, 3},
        {103, 12},
        {104, 23},
        {105, 0},
    };

    multimap<string, Order> customerOrders;
    int nextOrderID = 4;

    // Sample existing orders
    customerOrders.insert({"C001", {1, 101, 1, "C001", time(0)}});
    customerOrders.insert({"C002", {2, 102, 2, "C002", time(0)}});
    customerOrders.insert({"C003", {3, 103, 1, "C003", time(0)}});

    while (true) {
        cout << "\n===== Inventory Management Menu =====\n";
        cout << "1. Place New Order\n";
        cout << "2. View Orders by Customer\n";
        cout << "3. Check Low/Out-of-Stock Products\n";
        cout << "4. View Product Catalog\n";
        cout << "5. Exit\n";
        cout << "Select option (1-5): ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                placeOrder(nextOrderID, customerDirectory, products, productStock, customerOrders);
                break;
            case 2:
                viewOrdersByCustomer(customerDirectory, customerOrders, products);
                break;
            case 3:
                checkLowStock(productStock, products);
                break;
            case 4:
                showProductCatalog(products);
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
