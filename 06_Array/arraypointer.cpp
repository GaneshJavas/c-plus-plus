#include <iostream>
#include <string>

using namespace std;


int main(){
     
    int arr[4] = {11,22,33,44};

    int* address = &arr[0];

    cout << "Address of arr 0 : "<< address << endl;
    cout << "Address of arr 1 : "<< address + 1 << endl;
    cout << "Address of arr 2 : "<< address + 2 << endl;
    cout << "Address of arr 3 : "<< address + 3 << endl;

    return 0;
}
