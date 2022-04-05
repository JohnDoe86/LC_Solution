class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
    int i = 0;
    int j = nums.size()-1;
    while(i<j){
        while(nums[i]%2 != 0){
            i++;
            if(i==j) return nums;
        } 
        while(nums[j]%2 == 0){
            j--;
            if(j == 0) return nums;
        }
        if(i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }else{
            break;
        }
    }
    return nums;
    }
};