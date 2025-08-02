#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number till where you want the sum to be calculated: "<<endl;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
       sum+=i;
    }
    cout<<"\n. the sum calculated is: "<<sum;
    return 0;
}