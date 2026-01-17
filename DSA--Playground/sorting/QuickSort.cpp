#include<iostream>
#include<vector>
using namespace std;
class QuickSort{
    public:
    void quicksort(vector<int>&arr, int start,int end){
        if(start>=end){
            return;
        }
        int p=partition(arr,start,end);
        quicksort(arr,start,p-1);
        quicksort(arr,p+1,end);
    }

    int partition(vector<int>&arr,int start,int end){
        int pivot=arr[start];
        int count=0;
        for(int i=start+1;i<=end;i++){
            if(arr[i]<pivot){
                count++;
            }
        }
        int i=start;
        int j=end;
        int pivotIndex=start+count;
        swap(arr[start], arr[pivotIndex]);
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }

            if(i<pivotIndex && j>pivotIndex){
                swap(arr[i],arr[j]);
            }
        }
        return pivotIndex;
    }
};

int main() {
    vector<int> arr = {5, 2, 9, 1, 6, 3};

    QuickSort qs;

    cout << "Before sorting:\n";
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    qs.quicksort(arr, 0, arr.size() - 1);

    cout << "After sorting:\n";
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}