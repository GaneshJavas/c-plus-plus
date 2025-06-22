#include<iostream>

using namespace std;

class student3{
public:
    int val = 5;

// constructor     
    student3(int x){
        cout << "constructor called"<< endl;
        val = x;
    }

    student3(student3 &a){
        val = a.val + 1;
    }
    

};



int main(){

    student3 s1(10);

    student3 s2(s1);

    cout << s2.val << endl;

    return 0;
}