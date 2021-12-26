#include <iostream>

using namespace std;

int hex(int n){
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hn="";
    while(n>0){
        int r = n%16;
        hn = hex[r]+hn;
        n=n/16;}
    cout<<"Hexadecimal form of "<<n<<"is: "<<hn;
}

int oct(int n){
    int on=0,pv=1;
    while (n>0){
        on+=(n% 8) *pv;
        n/=8;
        pv*=10;
    }
    cout<<"Octal form of "<<n<<" is: "<<on;
}

int bin(int n){
    int a[32];
    int i;
    for (i=0; n>0; i++){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout<<"Binary form of "<<n<<" is: "<<a[j];
}

int main()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    char c;
    cout<<"Convert decimal to ?\n 1)hexadecimal:h\n 2)octal:o\n 3)binary:b "<<endl;
    cin>>c;
    if (c=='h'){
        hex(n);}
    else if (c=='o'){
        oct(n);}
    else if (c=='b'){
        bin(n);}
    else {
        cout<<"Invalid input !";}
    return 0;
}

