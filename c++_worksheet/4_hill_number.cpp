#include <iostream>

using namespace std;

int main()
{
    char number[20];
    cout<<"Enter the number: ";
    cin>>number;
    int digit;
    cout<<"Enter how many digits in the number: ";
    cin>>digit;
    int rise=0,fall=0,top=0,eq=0;
    //checking for the first part; the ascending part till the digit reaches its peak.
    while(top<1){
        for(int i=0; i<digit-1; i++){
            if(number[i]<number[i+1]){
                rise+=1;}
            else if(number[i]==number[i+1]){
                eq+=1;}
            else{
                top+=1;
                break;}
        }
    }
    //for checking the second half of the number; the descending part.
    for(int i=rise; i<digit-1; i++){
        if(number[i]<number[i+1]){
            cout<<i;
            top+=1;
            break;}
        else if(number[i]==number[i+1]){
            eq+=1;}
        else{
            fall+=1;}
    }
    if(fall>0 && rise>0 && eq==0 && top==1){
        cout<<"The number is a hill number";}
    else{
        cout<<"The number is not a hill number";}
    return 0;
}

