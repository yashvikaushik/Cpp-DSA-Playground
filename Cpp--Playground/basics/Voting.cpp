#include <iostream>
using namespace std;
int main(){

    int voterId;
    cout<<"enter your voter id: ";
    cin>>voterId;
    if(voterId%2==0){
       cout<<"you will vote at Booth A";
    }
    else{
       cout<<"you will vote at Booth B";
    }
    return 0;
}