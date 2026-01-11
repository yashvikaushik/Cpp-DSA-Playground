#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int size=nums.size();
        if(size==0){
            return;
        }
        k=k%size;
        if(k==0){
            return;
        }

        vector<int> arr(k);
        for(int i=0;i<k;i++){
            arr[i]=nums[i];
        }
        
        for(int i=0;i<size-k;i++){
            nums[i]=nums[i+k];

        }
        int j=0;
        for(int i=size-k;i<size;i++){
            nums[i]=arr[j++];
        }



    }
};

int main() {
    Solution sol;

    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k (positions to rotate): ";
    cin >> k;

    sol.rotateArray(nums, k);

    cout << "Array after left rotation:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
