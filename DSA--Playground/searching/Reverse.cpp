#include <iostream>
using namespace std;
class Reverse{
    int size;
    int *arr;
    public:
    Reverse(){
        this->size=0;
        arr=nullptr;
    }
   
    ~Reverse(){
        delete[] arr;
    }

    void input(){
        arr=new int[size];
        cout<<"enter the size of the array: "<<endl;
        cin>>size;
        cout<<"enter the array elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    void reverse(){
        int start=0;
        int end=size-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    void print(){
        cout<<"-----------------"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Reverse rev;
    rev.input();
    rev.reverse();
    rev.print();
    return 0;
}