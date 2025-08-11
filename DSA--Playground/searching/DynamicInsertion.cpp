#include <iostream>
using namespace std;
class Insertion{
    int size;
    int *arr;//dynamic array will be stored in heap
    int *newArray;

    public:
    //default constructor
    Insertion(){
        size=0;
        arr=nullptr;
    }
    
    //destructor to delete the initial old array
    ~Insertion(){
        delete[] arr;
    }
    void input(){
        
        cout<<"enter the size of the array that you want to be created"<<endl;
        cin>>size;
        arr=new int[size];
        cout<<"enter the array elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        
    }

    void displayOriginal(){
        cout<<"the original array: "<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void insertElement(int pos,int value){
        //new dynamic array to store the copy of old array and insert an element
        if (pos < 0 || pos > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        newArray=new int[size+1];

        for(int i=0;i<pos;i++){
            newArray[i]=arr[i];
        }

        newArray[pos]=value;

        for(int i=pos;i<size;i++){
            newArray[i+1]=arr[i];
        }
       size++;
       delete[] arr;
       arr = newArray;

    }
    void displayNew(){
        cout<<"the original array: "<<endl;
        for(int i=0;i<size;i++){
            cout<<newArray[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    Insertion insert;
    insert.input();
    insert.displayOriginal();
    cout<<"enter the position at which you want the value to be inserted"<<endl;
    int pos;
    cin>>pos;
    cout<<"enter the value you want to be inserted"<<endl;
    int value;
    cin>>value;
    insert.insertElement(pos,value);
    insert.displayNew();

    return 0;
}