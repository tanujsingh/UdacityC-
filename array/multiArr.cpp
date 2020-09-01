#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int multiArr[4][4];
    int vect[4];
    int resultantVect[4] = {0, 0, 0, 0};

    cout<<"Enter the 4x4 Array\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<"Enter the ["<<i<<"]["<<j<<"] element\n";
            cin>>multiArr[i][j];
        }
    }

    cout<<"Enter the vector of size 4\n";
    for(int i = 0; i < 4; i++) {
        cin>>vect[i];
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            resultantVect[i] += vect[i] * multiArr[j][i];
        }
    }

    cout<<"The resultant vector is\n";
    for(int i = 0; i < 4; i++) {
        cout<<resultantVect[i]<<"\t";
    }

    cout<<"\n";

    return 0;
}