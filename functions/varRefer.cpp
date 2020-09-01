#include "main.hpp"

int main() {
    int a = 34;

    cout<<"Before function call a = "<<a<<"\n";
    increment(a);
    cout<<"After function call a = "<<a<<"\n";
    
    return 0;
}