//showing some error !!


#include <iostream>

using namespace std;

int matrix_multiply()
{
    int i,j,m,n,p,q;
    int a[10][10], b[10][10],c[10][10];
    cout<<"enter dimension for a \n";
    cout<<"Enter row: ";
    cin>>m;
    cout<<"Enter column: ";
    cin>>n;
    cout<<"enter dimension for b \n";
    cout<<"Enter row: ";
    cin>>p;
    cout<<"Enter column: ";
    cin>>q;
    if(n!=p){
        cout<<"not multiplicable \n";
        exit(0); // Terminate the execution
    }
    cout<<"enter elements for a \n";
    for (i =0; i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\n enter elements for b \n";
    for(i =0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    for(i =0; i<m;i ++){
        for(j=0;j<q;j ++){
            c[i][j]=0;
            for(int k=0;k<n;k ++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<"\n The product matrix is \n";
    for(i =0; i<m;i++){
        for(j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}

int transpose(){
    int i,j,m,n;
    int a[10][10], trans[10][10];
    cout<<"enter dimension for a \n";
    cout<<"Enter row: ";
    cin>>m;
    cout<<"Enter column: ";
    cin>>n;

    cout<<"enter elements for a \n";
    for (i =0; i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            trans[j][i]=a[i][j];
        }
    }
    for (i=0; i<n;i++){
        for (j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<matrix_multiply();
    cout<<transpose();
    //int a[10][10],b[10][10];
    //if (transpose(matrix_multiply((a[][]),(b[][]))==matrix_multiply((transpose((a[][]))),(transpose((b[][])))){
        //cout<<true;

    return 0;
}

