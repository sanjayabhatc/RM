#include <iostream>

using namespace std;

 int sum_of_digits(int n){
        if(n==0)
        {
              return 0;
        }

        return (n % 10) + sum_of_digits(n / 10);}

int main()
{
    int c;
    cout<<"choice: 1)without recursion\n 2)with recursion: ";
    cin>>c;
    int n,sum=0,a;
    cout<<"Enter number: ";
    cin>>n;
    if (c==1){
        while (n>0){
        a=n%10;
        sum+=a;
        n=n/10;
        }
        cout<<sum<<endl;
    }

    else if (c==2){
        cout<<sum_of_digits(n);
    }
    else{
          cout<<"Invalid choice !";}

    return 0;
}



