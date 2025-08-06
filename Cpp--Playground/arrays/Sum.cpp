#include <iostream>
using namespace std;
class Sum{
int *arr;
int size;

public:

Sum(){
    this->size=0;
    arr=new int[size];
}

Sum(int size){
    this->size=size;
    arr=new int[size];

}

void input(){
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int sum(){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

return sum;
}
//destructor to free up the memory

~Sum() {
        delete[] arr;
    }
};
int main(){
    Sum sum;
    int s=0;
    sum.input();
     s=sum.sum();
    cout<<s;
    return 0;
}