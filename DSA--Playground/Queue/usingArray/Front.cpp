#include <iostream>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int capacity;

    public:
    Queue(int size){
        front=rear=-1;
        capacity=size;
        arr=new int[capacity];
    }

    void enqueue(int value){
        if(rear==(capacity-1)){
            cout<<"Overflow";

        }
        else if(rear==-1){
            front=rear=0;
            arr[rear]=value;
        }

        else{
            arr[++rear]=value;
        }
    }

    int Front(){
        if(front==-1){
            throw runtime_error("empty queue");
          
        }
        else{
            return arr[front];
        }
    }

    void print(){
        if(rear==-1){
            cout<<"the queue is empty"<<endl;
            return;
        }

        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }

        }
    }
};
int main(){
    Queue q1(10);
    q1.enqueue(9);
    q1.enqueue(10);
    q1.print();
   int f=q1.Front();
   cout<<f<<endl;


    return 0;
}