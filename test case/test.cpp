#include <iostream>


using namespace std;

int add(int nums[], int size){
    int total = 0;
    for(int i = 0; i< size; i++){
        total += nums[i];
    }

    return total;
}

int main(){
    int nums[4] = {1,3,4,6};
    int total = add(nums, 4);
    cout << "Total in main"<< total;
    return 0;
}