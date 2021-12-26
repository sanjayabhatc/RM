#include <iostream>

using namespace std;

//sorting the elements by length using insertion sort.
int sort_words(string arr[],int n){
    for (int j=0; j<n;j++){
        string temp=arr[j];
        int k=j-1;
        while (k>=0 && temp.length()<arr[k].length()){
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;
    }
}

//sort the letters  of the word.
int sort_letters(string arr[],int len,int i){
    if (len ==1){
        return 1;
    }
    for (int l=0; l<len-1;l++){
        if (arr[i][l]>arr[i][l+1]){
            char temp1=arr[i][l];
            arr[i][l]=arr[i][l+1];
            arr[i][l+1]=temp1;
        }
        //cout<<arr[i][l];
    }
    sort_letters(arr,len-1,i);

}

int main()
{
    string arr[10];
    int i,n;
    cout<<"Enter how many words : ";
    cin>>n;
    for (i=0; i<n; i++){
        cout<<i+1<<". Enter word: ";
        cin>>arr[i];
    }

    sort_words(arr,n);

    cout<<"The sorted array is : "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;}

    cout<<"The sorted array letter wise is : "<<endl;
    for (int i=0; i<n; i++){
        int len=arr[i].length();
        sort_letters(arr,len,i);
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}

