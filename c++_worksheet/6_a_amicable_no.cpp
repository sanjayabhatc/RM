#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int arrm[100],arrn[100];
    int sum=0,sum1=0;
    cout<<"Enter first no: ";
    cin>>m;
    cout<<"Enter second no: ";
    cin>>n;
    for (int i=1; i<m;i++){
        if (m%i==0){
            sum+=i;
            //cout<<i<<endl;
        }
    }
    for (int j=1; j<n;j++){
        if (n%j==0){
            sum1+=j;
            //cout<<j<<endl;
        }
    }
    //cout<<sum<<endl;
    //cout<<sum1<<endl;
    if (sum==n && sum1==m){
        cout<<m<<" and "<<n<<" are amicable numbers.";}
    else {
        cout<<m<<" and "<<n<<" are not amicable numbers.";}

    return 0;
}

