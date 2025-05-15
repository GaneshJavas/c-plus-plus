// 1. Age Group Categorization
// Classify a person's age group: Child (< 13), Teenager (13-19), Adult (20-60), Senior (60+).

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int age;
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Enter Your Age: ";
    cin >> age;

    if(age < 13){
        cout << name << " is Child";
    }
    else if(age >= 13 && age <= 19){
        cout << "Teenager";
    }
    else if(age >= 20 && age <= 60){
        cout << "Adult";
    }
    else{
        cout << "Senior";
    }



    return 0;
}