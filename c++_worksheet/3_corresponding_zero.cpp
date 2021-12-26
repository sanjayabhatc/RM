#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    cout<<"enter dimension for a \n";
    cout<<"Enter row: ";
    cin>>m;
    cout<<"Enter column: ";
    cin>>n;
    cout<<"enter elements for a \n";
    int a[m][n], b[m][n];
    for (i =0; i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];}
    }
        cout<<"Entered matrix is:"<<endl;
    for (i=0; i<m;i++){
    for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";}
        cout<<endl;}
    for(i =0; i<m;i++){
        for(j=0;j<n;j++){
            if (a[i][j]==0){
                for (int k=0;k<n;k++){
                    b[i][k]=0;}
                for (int k=0; k<m;k++){
                    b[k][j]=0;}
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i][j]!=0){
                b[i][j]=a[i][j];}
        }
    }
    cout<<"The resultant matrix is:"<<endl;
    for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
        cout<<b[i][j]<<" ";}
    cout<<endl;}
    return 0;
}

