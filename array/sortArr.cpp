#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int arr[6];
    
    for (int i = 0; i < 6; i++) {
        cout<<"Enter the input "<<i+1<<"\n";
        cin>> arr[i];
    }
    
    for (int k = 0; k < 6; k++) {
        for (int x = 5; x > k; x--) {
                if (arr[k] > arr[x]) {
                int temp = arr[x];
                arr[x] = arr [k];
                arr[k] = temp;
            }

        }
    }

    cout<<"Sorting Array: \n";
    for (int z = 0; z < 6; z++) {
        cout<<arr[z]<<"\t";
    }
    
    cout <<"\n";

    return 0;
}
