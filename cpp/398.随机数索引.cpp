class Solution{
    unordered_map<int, vector<int>> mp;
public:
    Solution(vector<int>& nums)
    {
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]].push_back(i);
        }
    }

    int pick(int target)
    {
        //取元素的vector
        auto& t = mp[target];
        return t[rand() % t.size()];
    }
}

//unorderede_map 里面可以包含别的容器

class Solution {
    vector<int> &nums;
public:
    Solution(vector<int> &nums) : nums(nums) {}

    int pick(int target) {
        int ans;
        for (int i = 0, cnt = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                ++cnt; // 第 cnt 次遇到 target
                if (rand() % cnt == 0) {
                    ans = i;
                }
            }
        }
        return ans;
    }
};

//ref https://mp.weixin.qq.com/s?__biz=MzU4NDE3MTEyMA==&mid=2247490892&idx=1&sn=c1fe373edc88142cbabd383ef3c0669b