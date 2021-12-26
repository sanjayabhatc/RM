#include <iostream>

using namespace std;

int  bubble_sort(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
      }
    }
    //we got the larger element, now iterating for remaining elements.
    if (n-1>1){
        bubble_sort(arr, n-1); }
}

int main()
{
    int n,arr[20];
    cout << "Enter number of elements: ";
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<i<<". Enter element: ";
        cin>>arr[i];
    }
    bubble_sort(arr, n-1);
    cout<<"Sorted array is: ";
    for (int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

