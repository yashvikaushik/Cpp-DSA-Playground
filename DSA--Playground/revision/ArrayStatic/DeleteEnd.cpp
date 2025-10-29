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
    cout<<"array after deleting last"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}