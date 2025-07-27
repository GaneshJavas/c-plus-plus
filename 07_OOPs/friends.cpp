// friend functions and friend classes are concepts that allow certain functions or classes to access the private and protected members of another class. These are useful concepts in such situations where you need to give a function or another class access to internal data, while still keeping it hidden from the outside world.

#include <iostream>
using namespace std;

class something{
private:
    int age;
public:
    something(int umar){
        age = umar;
    }
    // compareAge is a friend function, so it can access private members like age
    friend bool compareAge(something& p1 , something& p2);
    // hell is a friend class, so all methods of hell can access private members of something.
    friend class hell;
};

class hell{

};

bool compareAge(something& p1 , something& p2){
    // This function can access p1.age and p2.age even though they’re private, because it's a friend.
    if(p1.age < p2.age){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    something p1(30);
    something p2(36);

    if(compareAge(p1,p2)){
        cout << "Person 2 has more age. "<< endl;
    }
    else{
        cout << "Person 1 has more age. "<< endl;
    }



    return 0;
}