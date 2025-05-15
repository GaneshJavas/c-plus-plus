#include <iostream>
#include <string>


using namespace std;

int main(){

    string i = "Y";

    while (i == "Y"){
        cout << "You said yes" << endl;
        cout << "Try Again: ";
        cin >> i;
    }


    return 0;
}