#include <iostream>
#include <string>
using namespace std;

int main(){

    int rice = 150;
    float water = 0.5;
    double priceOfBoiledRice = 20.75;
    
    char riceGrade = 'A';
    // char riceGrade2 = 'AB';
    
    bool isCooked = false;
    // bool isReady = 4;
    // bool isReady2 = 0;

    cout << isCooked << endl; // 0
    // cout << isReady << endl; // 1
    // cout << isReady2 << endl; // 0

    cout << riceGrade << endl; // A
    // cout << riceGrade2 << endl; 
    //  multi-character character constant,
    //  implicit conversion from 'int' to 'char' changes value from 16706 to 66
    //  B


    return 0;
}