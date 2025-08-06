#include <iostream>
using namespace std;

class LinearSearch{
    int *arr;
    int size;


public:


    LinearSearch(){
        this->size=0;
        arr=nullptr;
    }
    LinearSearch(int size){
        this->size=size;
        arr=new int[size];
    }

    ~LinearSearch(){
        delete arr;
    }
    void input(){
        cout<<"enter the size of the array: "<<endl;
        cin>>size;
        cout<<"enter the array elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    bool findElement(int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                cout<<"key present"<<endl;
                return 1;
            }
        }
        cout<<"key absent"<<endl;
        return 0;

    }
};

int main(){

    LinearSearch ls;
    ls.input();
    cout<<"which element do you want to search for"<<endl;
    int key;
    cin>>key;
    ls.findElement(key);

    return 0;
}