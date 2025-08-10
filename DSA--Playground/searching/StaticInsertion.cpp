//static memory allocation insertion
#include <iostream>
using namespace std;
class Insertion{
    public:
    //method to display array elements
    void displayElements(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    //method to insert value in the array
    /*
    arr->the array of int type
    pos->postion at which the element has to be inserted
    n->number of elements initially in the array
    capcity->maximum elements that could be stored in the array
    value->the value that has to be inserted in the array at the specified position
    */
    void insertElement(int arr[],int &n,int capacity,int pos,int value){
        if(n>=capacity){
            cout<<"the array is full no elements could be inserted"<<endl;

        }

        if(pos<0 || pos>=n){
            cout<<"wrong position to insert the element"<<endl;
        }
        for(int i=n-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=value;
        n++;

    }
};

int main(){
    int capacity=10;
    int n;
    cout<<"enter the elements that are present initially"<<endl;
    cin>>n;
    int arr[capacity];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"enter the position at which you want the elemnt to be inserted"<<endl;
    int pos;
    cin>>pos;
    cout<<"enter the value that has to be inserted"<<endl;
    int value;
    cin>>value;
    Insertion insert;
    cout<<"array before insertion"<<endl;
    insert.displayElements(arr,n);
    insert.insertElement(arr,n,capacity,pos,value);
    cout<<"array after insertion"<<endl;
    insert.displayElements(arr,n);


}