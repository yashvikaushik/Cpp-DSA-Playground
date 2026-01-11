#include<iostream>
using namespace std;
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int size=nums.size();
        int temp=nums[0];
        for(int i=0;i<size-1;i++){
            nums[i]=nums[i+1];
        }
        nums[size-1]=temp;

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

    sol.rotateArrayByOne(nums);

    cout << "Array after rotating by one:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
