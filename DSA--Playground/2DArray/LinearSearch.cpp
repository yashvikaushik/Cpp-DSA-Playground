#include <iostream>
using namespace std;

bool LinearSearch(int arr[][100],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         if(arr[i][j]==target){
            return true;
         }
        }
    }
    return false;

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

    cout<<"Enter the element that you want to be searched"<<endl;
    int key;
    cin>>key;
    int temp;
    if(LinearSearch(arr,key,row,column)){
    cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    


    return 0;

}