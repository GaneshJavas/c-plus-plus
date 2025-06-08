#include <iostream>
#include <string>

using namespace std;


int main(){
     
    string pos = "ganesh";
    // string* address = &pos;
    string *address = &pos;
    cout <<   "value of &pos: " << &pos << endl;
    cout <<   "value of address: " << address << endl; 

    cout <<   "Dereference: " << *address << endl;
    string** address2 = &address;
    cout <<   "Address of address: " << address2 << endl;

    return 0;
}





