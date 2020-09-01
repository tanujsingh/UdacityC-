#include <iostream>
using namespace std;

void printProduct(int a, int b, int c);
void printEquation(int m1, int m2, int result, char operation);
int sum(int m1, int m2);

void printProduct(int a,int b,int c) {
    cout<<a<<" * "<<b<<" = "<<c<<"\n";
}

void printEquation(int m1, int m2, int result, char operation) {
    cout<<m1<<" "<<operation<<" "<<m2<<" = "<<result<<"\n";
}

int sum(int m1, int m2) {
    return m1 + m2;
}