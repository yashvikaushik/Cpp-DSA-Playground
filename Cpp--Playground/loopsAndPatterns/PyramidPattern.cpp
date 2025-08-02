#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows you want to be printed";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        for(int j=1;j<=i+1;j++){
            cout<<(j)<<" ";
        }

        for(int k=i;k>=1;k--){
            cout<<i<<" ";

        }
        cout<<endl;

    }
    return 0;
}