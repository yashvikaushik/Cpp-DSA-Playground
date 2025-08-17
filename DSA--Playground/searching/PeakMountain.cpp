#include <iostream>
using namespace std;
class MountainPeak{
    int *arr;
    int size;
    public:
    MountainPeak(int s){
        size=s;
        arr=new int[size];

    }

    ~MountainPeak(){
        delete[] arr;
    }

    void input(){
        cout<<"Enter the mountain array elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    int peak(){
        int peak=-1;
        int start=0;
        int end=size-1;
        while(start<=end){
            int mid=(start+end)/2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                    return mid; // Found the peak directly
                }
                else if (arr[mid] < arr[mid + 1]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
        }
        return peak;
    }
};
int main(){
    cout<<"Enter the size of the mountain array:"<<endl;
    int size;
    cin>>size;
    MountainPeak obj(size);
    obj.input();
    int peak=obj.peak();
    if(peak!=-1)
    cout<<"mountain peak is: "<<peak<<endl;
    else
    cout<<"no mountain exists"<<endl;
    return 0;
}