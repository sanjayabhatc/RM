#include <iostream>

using namespace std;

long int factorial(int n){
    if (n<=1) {
        return 1; }
    return n*factorial(n-1);
    }

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is: "<<factorial(a);
    return 0;
}

