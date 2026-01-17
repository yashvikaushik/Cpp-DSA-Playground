#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int size;
        
        vector<int> ans(n1+n2);
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(k==0 || ans[k-1]!=nums1[i]){
                    ans[k++]=nums1[i];
                }
                i++;
            }
            else{

                if(k==0 || ans[k-1]!=nums2[j]){
                    ans[k++]=nums2[j];
                }
                j++;

            }
        }
        while(i<nums1.size()){
            if(k==0 || ans[k-1]!=nums1[i]){
                    ans[k++]=nums1[i];
                }
                i++;

        }
        while(j<nums2.size()){
            if(k==0 || ans[k-1]!=nums2[j]){
                    ans[k++]=nums2[j];
                }
                j++;

        }
       ans.resize(k);
        return ans;
        
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 3, 5, 6};

    Solution sol;
    vector<int> result = sol.unionArray(nums1, nums2);

    cout << "Union of arrays: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}