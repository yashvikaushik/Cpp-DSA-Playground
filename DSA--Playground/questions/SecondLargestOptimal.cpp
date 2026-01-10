#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int size = nums.size();
        if (size <= 1) {
            return -1;
        }
        int largest=nums[0];
        int slargest=-1;
        for(int i=1;i<size;i++){
            if(nums[i]>largest){
                slargest=largest;
                largest=nums[i];
            }
        }
        
       
        return slargest;

    }

};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.secondLargestElement(nums);

    if (result == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << result;

    return 0;
}