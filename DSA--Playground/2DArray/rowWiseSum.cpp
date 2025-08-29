#include <iostream>
using namespace std;

void sum(int arr[][100],int n,int m){
    int sum;
    int largest=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];

        }
        cout<<"the sum of row "<<(i+1)<<" is: "<<sum<<endl;
        if(sum>largest){
            largest=sum;
        }
    }
    cout<<"Largest sum is: "<<largest<<endl;

}


int main(){
    cout<<"Enter the number of rows that must be present :"<<endl;
    int row;
    cin>>row;
    cout<<"enter the number of columns that must be presentL"<<endl;
    int column;    
    cin>>column;

    cout<<"Enter the array elements"<<endl;
    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
         cin>>arr[i][j];
        }
    }

    cout<<"The array as input by you is"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   sum(arr,row,column);
    return 0;
}