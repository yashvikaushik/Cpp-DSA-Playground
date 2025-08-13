//first and last occurence of an element in a sorted array using binary search
#include <iostream>
using namespace std;
class Occurence{
    int *arr;
    int size;
    public:
    Occurence(int s){
        size=s;
        arr=new int[size];
    }

    ~Occurence(){
        delete[] arr;
    }

    void input(){
        cout<<"enter the array elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    int firstOccurence(int key){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        int ans=-1;
        while(start<=end){
            
            if(arr[mid]==key){
                 ans=mid;
                end=mid-1;
               
            }

            else if(arr[mid]<key){
                start=mid+1;
            }

            else if(arr[mid]>key){
                end=mid-1;
            }
            mid=(start+end)/2;

        }
        return ans;
    }

    int lastOccurence(int key){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                start=mid+1;
              
            }
             else if(arr[mid]<key){
                start=mid+1;
            }

            else if(arr[mid]>key){
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;
    }
};

int main(){
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    Occurence occurence(n);
    occurence.input();
    cout << "Enter key to search: ";
    cin >> key;

    int result1 = occurence.firstOccurence(key);
    cout << "First Occurrence: " << result1 << endl;
    int result2 = occurence.lastOccurence(key);
    cout << "last Occurrence: " << result2 << endl;
    

    return 0;
}
