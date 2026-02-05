#include<iostream>
#include<vector>
using namespace std;
class BucketSort{
    public:
    void insertionSort(vector<float> &arr){
        int n=arr.size();
        for(int i=1;i<n;i++){
          float temp=arr[i];
          int j=i-1;
          while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
          }
          arr[j+1]=temp;
        }
    }

    void bucketSort(vector<float> &arr){
        int n=arr.size();
        vector<vector<float>> bucket(n);
        for(int i=0;i<n;i++){
            int idx=n*arr[i];
            bucket[idx].push_back(arr[i]);
        }

        for(int i=0;i<n;i++){
            insertionSort(bucket[i]);
        }
        int k=0;
        for(int i=0;i<n;i++){
            for(float x:bucket[i]){
             arr[k++]=x;
            }
        }
    }
};

int main() {
    BucketSort bs;

    // Input array (values must be in range [0, 1))
    vector<float> arr = {0.42, 0.32, 0.23, 0.52, 0.12};

    cout << "Before sorting:\n";
    for (float x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Call bucket sort
    bs.bucketSort(arr);

    cout << "After sorting:\n";
    for (float x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}