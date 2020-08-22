#include <iostream>
#include <stdio.h>

using namespace std;

int main (void) {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cout<<"Enter the input "<<i+1<<"\n";
        cin>> arr[i];
    }

    cout<<"Reverse Array: \n";
    for (int j = 4; j >= 0; j--) {
        cout<<arr[j]<<"\t";
    }
    cout<<"\n";

    return 0;
}