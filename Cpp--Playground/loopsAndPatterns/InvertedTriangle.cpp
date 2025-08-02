#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=4-i;k++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}