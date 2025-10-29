#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    cout<<"original size"<<n<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Enter the value that you want to insert"<<endl;
    int value;
    cin>>value;
    int newArr[n+1];
    for(int i=0;i<n;i++){
        newArr[i]=arr[i];
    }
    newArr[n]=value;
    for(int i=0;i<n+1;i++){
        cout<<newArr[i]<<" ";
    }
    cout<<"new size: "<<n+1;
}