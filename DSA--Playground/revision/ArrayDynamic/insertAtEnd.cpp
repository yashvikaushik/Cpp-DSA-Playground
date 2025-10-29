#include <iostream>
using namespace std;
class Insert{
    int size;
    int capacity;
    int *arr;
    public:
    Insert(int s,int c){
        size=s;
        capacity=c;
        arr=new int[capacity];
    }
    void addElements(){
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<"old size "<<size<<endl;
    }
    void insertAtEnd(int val){
        if(size>=capacity){
            cout<<"Elements cannot be added"<<endl;
            return;
        }
        arr[size]=val;
        size++;



    }
    void display(){
        if(size==0){
            cout<<"no elements"<<endl;
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"new size "<<size;
    }
    ~Insert() {
        delete[] arr;
    }

};
int main() {
    cout << "Enter size of array: ";
    int n;
    cin >> n;

    Insert obj(n,100); 

    cout << "Enter elements: ";
    obj.addElements();

    obj.insertAtEnd(30);
    cout << "After inserting at end: ";
    obj.display();

    return 0;
}