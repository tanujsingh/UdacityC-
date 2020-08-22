#include <iostream>
#include <stdio.h>

using namespace std;

int main (void) {
    int arr[5];
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < 5; i++) {
        cout<<"Enter the input "<<i+1<<"\n";
        cin>> arr[i];
        sum += arr[i];
    }

    avg = sum / 5.0;

    cout<<"The average of numbers is "<<avg<<"\n";
    cout<<"The sum of the numbers are "<<sum<<"\n";

    return 0;
}