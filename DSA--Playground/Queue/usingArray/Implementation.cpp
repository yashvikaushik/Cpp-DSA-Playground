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
};