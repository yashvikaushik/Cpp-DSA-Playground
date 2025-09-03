#include <iostream>
using namespace std;

void counting(int num){
    if(num==0)
    return;

    cout<<num<<endl;
    counting(num-1);

}

int main(){
    counting(5);
    return 0;
}