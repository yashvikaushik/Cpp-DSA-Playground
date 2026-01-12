#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                count++;
            }
        }
        int j=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }

        }
        for(int i=j;i<size;i++){
            nums[i]=0;
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