//Leetcode 53. Maximum Subarray

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int ans = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size();++i){
            sum = max(sum+nums[i], nums[i]);
            if(sum > ans) ans = sum;
        }
        return ans;
    }
};

int main(){
    vector<int> a{-1, -2, -3, 2, -5, 6, -1, 7};
    Solution test;
    int ans = test.maxSubArray(a);
    cout<<ans;
    return 0;
}
