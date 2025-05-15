#include <iostream>
#include <string>


using namespace std;

int main(){

    string i = "N";

    do{
        cout << "You said yes" << endl;
        cout << "Try Again: ";
        cin >> i;
    }while (i == "Y");


    return 0;
}