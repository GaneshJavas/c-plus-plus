#include<iostream>

using namespace std;

class student{
public:
// constructor without paramaters    
    student(){
        cout << "constructor called"<< endl;
    }

    void animal(string a){
        cout << "Animal name : "<< a << endl;
    }


};



int main(){
    // Object of a class is created
    // Constructors are special methods that are automatically called whenever an object of a class is created. 
    student s1;

    s1.animal("Tiger");

    return 0;
}