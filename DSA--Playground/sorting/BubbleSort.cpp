#include <iostream>
using namespace std;
class BubbleSort{
    int *arr;
    int size;
    public:
    BubbleSort(){
        size=0;
    }
    ~BubbleSort(){
        delete[] arr;
    }

    void input(){
        cout<<"Enter the size of the array"<<endl;
        cin>>size;
        cout<<"Enter the array elements"<<endl;
         arr=new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

    }

    void Sort(){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j+1]<arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
            }
        }
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
BubbleSort obj;
obj.input();
obj.display();
cout<<endl;
obj.Sort();
obj.display();
    return 0;
}