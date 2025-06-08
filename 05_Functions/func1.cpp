#include <iostream>

using namespace std;

void add(int x, int y);

void manufactureChocolate(int choco, int sugar){
    cout << "Received " << choco << " choco and "<< sugar << " sugar"<< endl;
}

void manufactureChocolate(int choco){
    cout << "Dark Chocolate"<< endl;
}
void manufactureChocolate(string choco = "Yeha tho kuch bhi nahi hai"){
    cout << choco << endl;
}

// quantity is a reference to an integer (int) that allows indirect access to the original variable it refers to. 
// Modifying quantity will directly affect the referenced integer, and it must be initialised at the time of declaration.

void chocoQuantity(int &quantity){
    quantity += 2;
    cout << "You have ordered "<< quantity << " number of chocolates."<< endl;
}

int main(){

    int quantity = 5;
    cout << "Chocolates" << endl;
    chocoQuantity(quantity);
    cout << "Value of quantity "<< quantity<< endl;


    auto lamdaExmaple = [](int xyz){
        cout << "Inside Lamda "<< xyz<< endl;
        return 0;
    };

    lamdaExmaple(6);

    manufactureChocolate();
    add(1,2);
    return 0;
}


void add(int x, int y){
    cout << x+y;
}
// call by value
// call by reference