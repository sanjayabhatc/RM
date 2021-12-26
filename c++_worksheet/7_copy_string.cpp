#include <iostream>

using namespace std;

int main()
{
    string word;
    string *pword;
    string cword="";
    cout<<"Enter a word: ";
    cin>>word;
    pword=&word;
    cword=*pword;
    cout<<"The original string is : "<<word<<endl;
    cout<<"The copied string is : "<<cword;
    return 0;
}

