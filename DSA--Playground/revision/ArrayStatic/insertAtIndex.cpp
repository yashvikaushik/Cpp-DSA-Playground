#include <iostream>
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

    cout<<"enter the index where you want the value to be inserted"<<endl;
    int pos;
    cin>>pos;
    cout<<"Enter the value that you want to insert"<<endl;
    int val;
    cin>>val;
    int newSize=n+1;
    int newArr[newSize];
    for(int i=0;i<pos;i++){
        newArr[i]=arr[i];
    }
    newArr[pos]=val;
    for(int i=pos;i<newSize;i++){
        newArr[i+1]=arr[i];
    }
    cout<<"array after insertion"<<endl;
    for(int i=0;i<newSize;i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}