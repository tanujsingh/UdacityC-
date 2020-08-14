#include <iostream>
#include <sstream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    int target;
    string userString;
    int guess = -1;

    srand(time(NULL));

    target = rand() % 100 + 1;

    while (guess != target) {
        cout <<"Guess a number between 0 to 100:";
        getline(cin, userString);
        stringstream(userString)>> guess;

        cout<<userString<<"\n";

        if (guess > target) {
            cout<<"Guess too high"<<"\n";
        } else if (guess < target) {
            cout<<"Guess too low"<<"\n";
        } else {
            cout <<"Right guess!\n";
        }

        if (userString == "q") {
            cout<<"Goodbye!"<<"\n";
            cout<<"The number was "<<target<<"\n";
            break;
        }

    }

    return 0;
}