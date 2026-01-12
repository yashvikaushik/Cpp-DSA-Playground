#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        vector<int> arr(size);
        int j=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                arr[j++]=nums[i];

            }
        }
        for(int i=j;i<size;i++){
            arr[i]=0;
        }
        for(int i=0;i<size;i++){
            nums[i]=arr[i];
        }
        
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}