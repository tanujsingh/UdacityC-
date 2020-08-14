#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    
    
    for (int i = 0; i < 5; i++) {
        cout <<"Enter the Number "<<i+1<<"\n";
        scanf("%d", &userInput);
        
        if (userInput > maxNumber) {
            maxNumber = userInput;
        }

        if (userInput < minNumber) {
            minNumber = userInput;
        }
    }
    cout<<"Maximum number is - "<<maxNumber<<"\n";
    cout<<"Minimum number is - "<<minNumber<<"\n";

    return 0;
}