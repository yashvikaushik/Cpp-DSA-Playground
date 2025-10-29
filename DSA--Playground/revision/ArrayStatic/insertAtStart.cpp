#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"the original array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int newsize=n+1;
    int newArr[n+1];
    for(int i=0;i<newsize;i++){
        newArr[i+1]=arr[i];
    }
    cout<<"enter the value that you want to insert at the beginning"<<endl;
    int value;
    cin>>value;
    newArr[0]=value;
    cout<<"array after insertion"<<endl;
    for(int i=0;i<newsize;i++){
        cout<<newArr[i]<<" ";
    }

    return 0;
}