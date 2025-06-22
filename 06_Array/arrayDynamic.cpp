#include <iostream>
using namespace std;

// Function to dynamically allocate and initialize an array
int* dynamicArray(int subs){
    int* scores = new int[subs];         // dynamic memory allocation
    for (int i = 0 ; i < subs ; i++){
        scores[i] = (i + 1) * 10;        // sample initialization
    }
    return scores;                       // return pointer to array
}

int main(){
    int subs = 5;
    int* marks = dynamicArray(subs);     // get dynamic array

    // Print the array values
    for(int i = 0; i < subs ; i++){
        cout << "Subs scores : " << i + 1 << " got " << marks[i] << endl;
    }

    delete[] marks; // ✅ Correct way to deallocate dynamic array

    return 0;
}
