#include <iostream>

using namespace std;
int fibonacci(int n){
    if (n==1 || n==0){
        return n;
    }
    return fibonacci(n-2)+fibonacci(n-1);}  //sum of the previous 2 numbers is the given number.

int main()
{
    int i=0;
    while (i<40){
        cout<<fibonacci(i)<<endl;
        i++;
    }
    return 0;
}

