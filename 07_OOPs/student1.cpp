#include <iostream>
#include <vector>

using namespace std;

class Student1{

    public: 
        // member datas => attributes
        string firstName;
        string lastName;
        vector<int> scores;

        // member functions
        void displayDetails(){
            cout << "Full Name : "<< firstName << " "<< lastName << endl;
            cout << "Scores : ";

            for(int score: scores){
                cout << score << ", ";
            }
            cout << endl;
            
        }


};

int main(){

    cout << "Start of main function()"<< endl;

    Student1 vipin;

    vipin.firstName = "Vipin";
    vipin.lastName = "Sen";
    vipin.scores = {20, 30, 40, 50};


    vipin.displayDetails();


    return 0;
}