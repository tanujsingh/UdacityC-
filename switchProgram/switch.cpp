#include <iostream>

using namespace std;

int main(void) {

    float in1, in2;
    char operation;
    float output = 0;

    cout <<"Enter the two numbers: \n";
    cin>>in1>>in2;
    cout <<"Enter the operation '+', '-', '*', '/'\n";
    cin>>operation;

    switch (operation) {
        case ('+'): {
            output = in1 + in2;
            break;
        }
        case ('-'): output = in1 - in2;
        break;
        case ('*'): output = in1 * in2;
        break;
        case ('/'): output = in1 / in2;
        break;
        default: cout <<"Wrong Operation\n";
    }

    cout<<"The answer is "<<output<<"\n";

    return 0;
}