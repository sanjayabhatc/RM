#include<iostream>
using namespace std;
void Fibonacci(int num)
{
    static int first_term= 0, second_term = 1, third_term;
    if(num > 0){
        third_term = first_term + second_term;
        first_term = second_term;
        second_term = third_term;
        cout << third_term << endl;
        Fibonacci(num - 1);
    }
}
int main()
{
    int num;
    cout << "Enter  number of terms to be printed from fibonacci series:";
    cin >> num;
    cout << "Fibonacci Series for a given number: \n" << endl;
    cout << "0" << endl;
    cout << "1" << endl;
    Fibonacci(num - 2); //number-2 is used because we have already print 2 numbers
    return 0;
}

