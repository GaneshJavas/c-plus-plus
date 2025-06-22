#include <iostream>
using namespace std;

class Karan {
private:
    string gf;

public:
    // Constructor to initialize 'gf'
    Karan(string g) {
        gf = g;
    }

    // Setter method to change 'gf'
    void setGf(string g) {
        gf = g;
    }

    // Getter method to access 'gf'
    string getGf() {
        return gf;
    }
};

int main() {
    Karan gf1("Priya"); // Constructor is called and gf = "Priya"

    cout << gf1.getGf() << endl; // Output: Priya

    gf1.setGf("Soumya"); // Changing gf to "Soumya" using setter

    cout << gf1.getGf() << endl; // Output: Soumya

    return 0;
}
