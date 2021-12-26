#include <iostream>

using namespace std;

int binary_search(int f, int  arr[],int low, int last){
    while (low<=last){
        int mid=((arr[low]+arr[last])/2);
        if (f=arr[mid]){
            return mid;}
        else if (f<arr[mid]){
                    last=mid-1;}
        else{
            low=mid+1;}

    }
    return -1;
}


int main(void)
{
    char c;
    int arr[20],n;
    cout<<"Enter how many elements: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<i<<". Enter element: ";
        cin>>arr[i];
    }
    cout<<"Enter your choice:\n 1)bubble sort: b\n 2)selection sort: s\n";
    cin>>c;
    if (c=='b'){
        for (int j=0; j<n-1; j++){
            for (int k=0; k<n-j-1; k++){
                if (arr[k]>arr[k+1]){
                    int temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
        for (int l=0;l<n;l++){
            cout<<arr[l]<<" ";
        }
        int f;
        int low=0;
        int last=n-1;
        cout<<"\nEnter the element whose position you want to know: ";
        cin>>f;
        int result=binary_search(f,arr,low,last);
        if (result==-1){
            cout<<"Element not found !";
        }
        else{
            cout<<"The position of the element is: "<<result;}
    }
    else if (c=='s'){
        for (int q; q<n-1; q++){
            int pos=q;
            int small=arr[q];
            for (int e=q+1; e<n;e++){
                if (small>arr[e]){
                    pos=e;
                    small=arr[e];
                }
            }
        arr[pos]=arr[q];
        arr[q]=small;
        }
        for (int o=0;o<n;o++){
            cout<<arr[o]<<" ";}
        int f;
        cout<<"\nEnter the element whose position you want to know: ";
        cin>>f;
        int low=0;
        int last=n-1;
        int result=binary_search(f,arr,low,last);
        if (result==-1){
            cout<<"Element not found !";
        }
        else{
            cout<<"The position of the element is: "<<result;}
    }
    else {
        cout<<"Invalid choice !!";}
    return 0;
}

