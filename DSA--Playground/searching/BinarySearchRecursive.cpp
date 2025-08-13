#include <iostream>
using namespace std;
class BinarySearch{
    int *arr;
    int size;
    public:
    BinarySearch(int s){
       size=s;
       arr=new int[size];
    }

    ~BinarySearch(){
        delete[] arr;
    }

    void input(){
        for(int i=0;i<size;i++){
             cin>>arr[i];
        }
    }

    int search(int key,int mid,int start,int end){
        start=0;
        end=size-1;
        mid=(start+end)/2;
        if(start>end){
            return -1;
        }

        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
return search(key,mid-1,start,end);
        }

        if(key>arr[mid]){
            return search(key,start+1,start,end);
        }

    }

    void show(){
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
};

int main(){
    cout<<"enter the size of the array that you want to be created:"<<endl;
    int size;
    cin>>size;
    cout<<"enter the array elements:"<<endl;
    BinarySearch binSearch(size);
    binSearch.input();
    cout<<"enter the element that you want to be searched:";
    int key;
    cin>>key;
    int mid = 0, start = 0, end = size - 1;
    int result = binSearch.search(key, mid, start, end);
     if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}