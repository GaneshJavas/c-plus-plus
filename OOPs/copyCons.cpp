#include <iostream>
using namespace std;

class Cons {
public:
    string subject;
    int* score;

    // Default Constructor
    Cons() {
        subject = "Not Specified";
        score = new int(0); // Safe initialization
        cout << "Default Constructor Called\n";
    }

    // Parameterized Constructor
    Cons(string subs, int sc) {
        subject = subs;
        score = new int(sc);
        cout << "Parameterized Constructor Called\n";
    }

    // Copy Constructor (Deep Copy)
    Cons(const Cons& misc) {
        subject = misc.subject;
        score = new int(*misc.score);
        cout << "Copy Constructor Called\n";
    }

    // Destructor
    ~Cons() {
        delete score;
        cout << "Destructor Called for " << subject << "\n";
    }

    // Display Function
    void displayMarksheet() {
        cout << subject << " : " << *score << endl;
    }
};

int main() {
    Cons subject1("Science", 40);
    Cons subject2 = subject1; // Calls copy constructor

    subject1.displayMarksheet();
    subject2.displayMarksheet();

    // Modify subject1 only
    subject1.subject = "Maths";
    *subject1.score = 45;

    subject1.displayMarksheet();
    subject2.displayMarksheet(); // Should remain unchanged

    return 0;
}