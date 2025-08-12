#include <iostream>
using namespace std;
//binary search using iterative method
class BinSearch{
    int size;
    int *arr;
    public:
    BinSearch(int s){
        size=s;
        arr=new int[size];
    }
    ~BinSearch(){
        delete[] arr;
    }

    void input(){
        cout<<"enter the array elements:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<endl;
    }

    int search(int element){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        for(int i=0;i<size;i++){
            if(element==arr[mid]){
                return mid;
            }
            if(element<arr[mid]){
                end=mid-1;
            }
            if(element>arr[mid]){
                start=mid+1;
            }
            int mid=(start+end)/2;
            
        }
        return -1;


    }
};
int main(){
    cout<<"enter the size of the array"<<endl;
    int size;
    cin>>size;
    BinSearch bin(size);
    bin.input();
    cout<<"enter the value that you want to search:"<<endl;
    int value;
    cin>>value;
    int index=bin.search(value);
    if(index!=-1){
    cout<<"found at: "<<index;
    }
    else{
        cout<<"not found!";
    }
    return 0;
}