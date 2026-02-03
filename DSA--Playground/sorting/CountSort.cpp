#include<iostream>
using namespace std;
#include<vector>
class CountingSort{
    public:
    void countSort(vector<int> &arr,int k,int n){
       vector<int> count(k+1,0);
       vector<int> new_arr(n);
       for(int i=0;i<n;i++){
        count[arr[i]]++;
       }
       //updated count
       for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
       }
       //sorting
       for(int i=n-1;i>=0;i--){
        new_arr[--count[arr[i]]]=arr[i];
       }
       //updting the original array
       for(int i=0;i<n;i++){
        arr[i]=new_arr[i];
       }
    }
};

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    int n = arr.size();

    int k = 8;   // maximum element in array

    CountingSort cs;
    cs.countSort(arr, k, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
