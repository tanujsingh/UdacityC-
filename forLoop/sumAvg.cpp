#include <iostream>

using namespace std;

int main() {
    
    int num = 0;
    int sum = 0;
    float avg = 0.0;

    cout<<"Enter the 5 inputs\n";
    for (int i = 0; i < 5; i++) {
        cin>>num;
        sum += num;
    }

    cout<<"Sum: "<< sum <<"\n";
    cout<<"Average: "<< sum/5 <<"\n";

    return 0;
}
