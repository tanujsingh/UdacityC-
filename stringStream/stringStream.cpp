#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string strLength;
    float inches = 0;

    cout << "Enter the number of inches: ";
    getline(cin, strLength);
    stringstream(strLength) >> inches;
    cout << "Entered Number: "<<inches<<"\n";

    return 0;
}