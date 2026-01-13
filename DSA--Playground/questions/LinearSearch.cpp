#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
int main() {
    Solution sol;

    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int index = sol.linearSearch(nums, target);

    if (index != -1) {
        cout << "Element found at index: " << index;
    } else {
        cout << "Element not found";
    }

    return 0;
}