#include <iostream>
using namespace std;
class PivotElement{
    public:
    int getPivot(int arr[],int size){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        while(start<end){
            if(arr[0]<arr[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=(start+end)/2;
        }
        return start;

    }
};
int main(){
    int arr[]={7,9,1,3,5};
    int size=5;
    PivotElement obj;
    int pivot=obj.getPivot(arr,size);
    cout<<"Pivot element at index : "<<pivot;
    return 0;
}