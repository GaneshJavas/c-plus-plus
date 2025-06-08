#include <iostream>
using namespace std;

int* adding(int size){
    int* nums = new int[size];
    for(int i = 0; i < size; i++){
        nums[i]= (i+1) * 10;
    }

    return nums;
} 


int main() {
    int size = 4;
    int* result = adding(size);
    for(int i = 0; i < size; i++){
        cout << result[i] << endl;
    }
    delete[] result;
    return 0;
}