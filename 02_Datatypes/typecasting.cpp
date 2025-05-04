#include <iostream>

using namespace std;

int main(){

    float ricePrice = 74.99;
    int roundedRicePrice =  (int) ricePrice;

    // int roundedRicePrice =  (short) ricePrice;
    // bad practice and common mistake even though the result might not differ due to the size.
    cout << roundedRicePrice << endl; // 74, ignores everything after decimal





    return 0;
}