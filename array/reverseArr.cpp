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

    for (int k = 0; k < 5; k++) {
        for (int x = k; x < 5; x++) {
                if (arr[x] > arr[x + 1]) {
                int temp = arr[x];
                arr[x] = arr [x + 1];
                arr[x + 1] = temp;
            }

        }
    }

    cout<<"Sorting Array: \n";
    for (int z = 0; z < 5; z++) {
        cout<<arr[z]<<"\t";
    }
    
    cout <<"\n";

    return 0;
}