#include <iostream>
using namespace std;

int power(int num,int pow){
    if(pow==0){
        return 1;

    }

    return num*power(num,pow-1);
}
int main(){
    cout<<"Enter the number: "<<endl;
    int num;
    cin>>num;
    cout<<"Enter the power: "<<endl;
    int pow;
    cin>>pow;
    cout<<"Ans: "<<power(num,pow)<<endl;
    return 0;
}