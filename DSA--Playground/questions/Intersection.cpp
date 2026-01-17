#include<iostream>
#include<vector>
using namespace std;
class Solution{	
	public:
		vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
			//your code goes here
            int i=0;
            int j=0;
            int k=0;
            int n1=nums1.size();
            int n2=nums2.size();
            vector<int> ans(n1+n2);
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]<nums2[j])
                i++;
                else if(nums2[j]<nums1[i])
                j++;
                else{
                    if(k==0 || ans[k-1]!=nums1[i])
                    ans[k++]=nums1[i];

                    i++;
                    j++;
                }

            }
            ans.resize(k);
            return ans;
            
		}
};

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 5};

    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection of arrays: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}