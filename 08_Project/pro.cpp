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

int main(){
    vector <Product> products = {
        {101, "Product1", "Category1"},
        {102, "Product2", "Category1"},
        {103, "Product3", "Category2"},
        {104, "Product4", "Category2"},
        {105, "Product5", "Category3"},
    };

    deque <string> recentCusts = {"cust01", "cust02", "cust03"};

    recentCusts.push_back("cust00");
    recentCusts.push_front("cust05");

    list <Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});
    
    set <string> categories;
    for (const auto &product: products){
        categories.insert(product.category);
    }

    map <int, int> productStock = {
        {101, 10},
        {102, 1},
        {103, 12},
        {104, 23},
        {105, 12},
    };

    multimap <string, Order> customerOrders;

    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerDate = {
        {"C001", "Jai"},
        {"C002", "Vipin"},
        {"C003", "Amit"},
        {"C004", "Satyam"},
        {"C005", "Gulshan"},
    };

    unordered_set <int> uniqueProductIDs;
    for (const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
}