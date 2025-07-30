#include <iostream>
using namespace std;
int main(){

    int row=4;
    int column=4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;

}