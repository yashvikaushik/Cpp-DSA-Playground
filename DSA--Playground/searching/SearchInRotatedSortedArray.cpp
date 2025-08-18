#include <iostream>
using namespace std;
class RotatedSortedBinarySearch{
    public:
    int binarySearch(int arr[],int s,int e,int key){
        int start=s;
        int end=e;
        int mid=(start+end)/2;
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
              start=mid+1;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return -1;

    }
//returns the index of the array element which was the pivot element
    int getPivot(int arr[],int size){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        while(start<end){
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }

           mid=(start+end)/2;
        }
        return start;

    }

    int searchElement(int arr[],int key,int size){
        int found;
        int pivot=getPivot(arr,size);
        if(key>=arr[0] && key<=arr[pivot-1]){
            found= binarySearch(arr,0,pivot-1,key);
        }
        else{
             found=binarySearch(arr,pivot,size-1,key);
        }
        return found;
    }

};
int main(){
    int arr[]={5,6,7,8,9,1,2,3};
    int size=8;
    cout<<"enter the value to be searched in the rotated sorted array: "<<endl;
    int key;
    cin>>key;
    RotatedSortedBinarySearch obj;
    int result=obj.searchElement(arr,key,size);
    cout<<"Found at index: "<<result;
    return 0;
}