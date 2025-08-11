#include <iostream>
using namespace std;
class Deletion{
    int size;
    int *arr;
    int *newArray;
    public:
    Deletion(){
        size=0;
        arr=nullptr;
    }
    ~Deletion(){
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

    void deleteElement(int pos){
      if (pos < 0 || pos > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        newArray=new int[size-1];
        for(int i=0;i<pos;i++){
            newArray[i]=arr[i];
        }
        for(int i=pos+1;i<size;i++){
            newArray[i-1]=arr[i];
        }
        size--;
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
    Deletion deletion;
    deletion.input();
    deletion.displayOriginal();
    cout<<"enter the position at which you want the value to be deleted"<<endl;
    int pos;
    cin>>pos;
    deletion.deleteElement(pos);
    deletion.displayNew();

    return 0;
}
