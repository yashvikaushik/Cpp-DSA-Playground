#include <iostream>
using namespace std;
class stacks{
    int capacity;
    int top;
    int *array;
    public:
    stacks(int size){
        top=-1;
        capacity=size;
        array=new int[capacity];
    }

    // void push(int element){
    //     if(top==(capacity-1)){
    //         cout<<"stack overflow cannot add more elements";
    //         return;
    //     }

    //     array[++top]=element;

    // }
    void print(){
        if(top==-1){
            cout<<"the stack is empty"<<endl;

        }
        else{
            for(int i=0;i<=top;i++){
                cout<<array[i]<<endl;
            }
        }
    }
};
int main(){
    return 0;
}
