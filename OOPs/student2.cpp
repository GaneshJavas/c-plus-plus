#include<iostream>

using namespace std;

class student2{
public:
// constructor with paramaters    
    student2(int x){
        cout << "constructor called : "<< x << endl;
    }

    void animal(string a){
        cout << "Animal name : "<< a << endl;
    }


};



int main(){
    // Object of a class is created
    // Constructors are special methods that are automatically called whenever an object of a class is created. 
    student2 s1(10);

    s1.animal("Tiger");

    return 0;
}