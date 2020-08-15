#include <iostream>

using namespace std;

int main (){
    int givenInt = 10;
    float givenFloat = 10.50;
    double givenDouble = 10.1225;
    string givenString = "Hello World";
    char givenChar = 'A';

    int *pInt = &givenInt;
    float *pFloat = &givenFloat;
    double *pDouble = &givenDouble;
    string *pString = &givenString;
    char *pChar = &givenChar;

    cout <<"pointer stores "<<pInt<<"\t"<<pFloat<<"\t"<<pDouble<<"\t"<<pString<<"\t"<<pChar<<"\n";
    cout<<"pointer points to "<<*pInt<<"\t"<<*pFloat<<"\t"<<*pDouble<<"\t"<<*pString<<"\t"<<*pChar<<"\n";"\n";

    return 0;
}