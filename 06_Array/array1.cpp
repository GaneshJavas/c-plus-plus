#include <iostream>


using namespace std;

int add(int a[], int size);

int main(){

    int arr[4] = {11,22,33,44};
    // for(int i = 0; i < 4; i++){
    //     cout << "Sr. " << i+1 << " " << arr[i] << endl; 
    // }
    
    int tt = add(arr, 4);

    cout <<  "Total : " <<  tt << endl; 
    return 0;
}

int add(int a[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
       total += a[i];  
    }

    return total;
}