#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open()) {
        myfileI << "\n I am adding a line.\n";
        myfileI <<"I am adding another line.\n";
        myfileI.close();
    } else {
        cout << "Unable to open the fine for writing";
    }

    ifstream myfileO ("input.txt");
    if (myfileO.is_open()) {
        while (getline (myfileO, line)) {
            cout << line << '\n';
        }
        myfileO.close();
    } else {
        cout << "Unable to open file for reading.";
    } 
    
    return 0;
}