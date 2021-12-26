#include <iostream>

using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   //we find the remainder of the 2 numbers. If first number is smaller, the 2 number switches.
   // dividing until the remainder turns out to be common divisor.
}
int main() {
   int a , b;
   cout<<"Enter the value of a: "<<endl;
   cin>>a;
   cout<<"Enter the value of b: "<<endl;
   cin>>b;
   cout<<"GCD of "<< a <<" and "<< b <<" using euclidean algorithm is "<< gcd(a, b);
   return 0;
}

