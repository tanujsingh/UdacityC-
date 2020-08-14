#include <iostream>
#include <string>

using namespace std;

int main() {
    string userName1, userName2, userAddress1, userAddress2;
    long userNumber1, userNumber2;

    cout<< "Enter the Name of User1" << endl;
    getline(cin, userName1);
    cout<< "Enter the Name of User2" << endl;
    getline(cin, userName2);
    cout<< "Address of User1" <<"\n";
    getline(cin, userAddress1);
    cout<< "Address of User2" <<"\n";
    getline(cin, userAddress2);
    cout<< "Phone number of User1"<<"\n";
    cin>> userNumber1;
    cout<< "Phone number of User2"<<"\n";
    cin>> userNumber2;
    
    cout<<userName1<< " has the Address "<<userAddress1<<" with home phone number "<<userNumber1<<"\n";
    cout<<userName2<< " has the Address "<<userAddress2<<" with home phone number "<<userNumber2<<"\n";

    return 0;
}