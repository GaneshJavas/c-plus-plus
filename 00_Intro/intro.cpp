#include<iostream>

// # this is a preprocessor directive, here type of directive is inclusive i.e. include and the file which is being used is iostream
// iostream is usually used to control the input output streams.

using namespace std; 

// namespace in the region of std or standard.

int main(){
    cout << "Welcome to C++ class" << endl;
    // cout - To display
    // << - operator
    std::cout << "Welcome to C++ class" << std::endl;
    // to avoid direct use of standard namespace we can directly access the std by :: double colons
    return 0; // this will return the exit code, if not mentioned compliler will automatically assign 0.
}

// We can define a function or method, but it needs to be declared statically-typed i.e., what type of data will be returned.

