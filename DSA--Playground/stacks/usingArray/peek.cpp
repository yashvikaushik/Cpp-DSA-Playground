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

    ~stacks(){
        delete [] array;
    }

    void push(int element){
        if(top==(capacity-1)){
            cout<<"stack overflow cannot add more elements"<<endl;;
            return;
        }

        array[++top]=element;

    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }

    }

    int peek(){
        if(top==-1){
            throw runtime_error("Empty stack (peek)");
        }
        else{
           return array[top];
        }
    }



    void print(){
        if(top==-1){
            cout<<"the stack is empty"<<endl;

        }
        else{
            for(int i=top;i>=0;i--){
                cout<<array[i]<<endl;
            }
        }
    }
};
int main(){

    cout << "Enter the capacity of your stack: ";
    int size;
    cin >> size;

    stacks s(size);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    s.pop();
    cout<<"----------"<<endl;

    s.print();

    s.pop();
    cout<<"----------"<<endl;
    s.print();
cout<<"----------"<<endl;
   cout<< s.peek()<<endl;

  
    return 0;
}
