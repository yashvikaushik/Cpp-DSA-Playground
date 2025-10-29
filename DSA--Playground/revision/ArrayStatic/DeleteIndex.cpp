#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"original array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int pos;
    cout<<"enter the index to be deleted"<<endl;
    cin>>pos;
    cout<<"enter the index whos value has to be deleted";
    int newArr[n-1];
    for(int i=0;i<pos;i++){
        newArr[i]=arr[i];
    }
    for(int i=pos+1;i<n-1;i++){
        newArr[i-1]=arr[i];
    }
    cout<<"Array after deletion"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}