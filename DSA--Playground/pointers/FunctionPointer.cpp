#include <iostream>
using namespace std;
// void updateAddress(int * &p){
//     p+=1;

// }

// void updateValue(int *p){
//     *p+=1;
// }

int getSum(int *arr,int n){
    cout<<"size: "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
    // int value=5;
    // int *ptr=&value;
    // cout<<"============"<<endl;
    // cout<<ptr<<endl;
    // updateAddress(ptr);
    // cout<<ptr<<endl;
    // cout<<"============"<<endl;
    // cout<<*ptr<<endl;
    // updateValue(ptr);
    // cout<<*ptr<<endl;
    // cout<<"============"<<endl;

    int arr[4]={1,2,3,4};
    int sum=getSum(arr,4);
    cout<<"sum: "<<sum;

    int sum1=getSum(arr+1,3);
    cout<<"sum1: "<<sum1;

    return 0;
}