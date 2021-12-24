#include <iostream>
//#include<cstring>

using namespace std;

int main()
{
    string word;
    cout << "Enter the string: ";
    cin>>word;
    int len=word.length();
    for (int i=0;i<len;i++){
        for (int j=i+1; j<len; j++){
            if (word[i]>word[j]){
                char temp=word[i];
                word[i]=word[j];
                word[j]=temp;
            }
        }
    }
    cout<<word;
    return 0;
}
