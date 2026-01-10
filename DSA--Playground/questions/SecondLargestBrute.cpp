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

        // Selection sort
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < size; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = nums[minIndex];
            nums[minIndex] = nums[i];
            nums[i] = temp;
        }

        int largest = nums[size - 1];

        for (int i = size - 2; i >= 0; i--) {
            if (nums[i] != largest) {
                return nums[i];
            }
        }

        return -1;
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