#include <iostream>

using namespace std;

int main(){

    int chocolates = 10;
    // int mangoes = -10; 
    
    // Since, mangoes cannot be negative we will be using unsigned values 
    unsigned mangoes = -10; // returns garbage value
    unsigned int mango = -100; // returns 100

    long price = 100000000;

    cout << chocolates << endl; // 10
    cout << mangoes << endl; // -10 // unsigned > 4294967286 this is a garbage value till the correct value is given

    cout << price << endl;


    return 0;
}