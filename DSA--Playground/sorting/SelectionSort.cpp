#include <iostream>
using namespace std;
class SelectionSort{
    int *arr;
    int size;
    public:
    ~SelectionSort(){
        delete[] arr;
    }
    void input(){
        cout<<"Enter the size of the array"<<endl;
        cin>>size;
        arr=new int[size];
        cout<<"Enter the array elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void sort(){
        for(int i=0;i<size-1;i++){
            int minIndex=i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[minIndex]){
                    minIndex=j;
                }
            }

            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
        //delete[] arr;

    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

    }
    

};
int main(){
SelectionSort obj;
obj.input();
obj.display();
obj.sort();
cout<<endl;
obj.display();

    return 0;
}