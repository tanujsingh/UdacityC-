#include <iostream>

using namespace std;

int main() {
    enum WEEK {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} bestDay;

    bestDay = Friday;

    if (bestDay == Friday) {
        cout<<"I'm not sure Sunday is the best day."<<endl; 
    }

    return 0;
}