class RandomizedSet {
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.count(val)) return false;
        nums.push_back(val);
        mp[val] = nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.count(val) == 0) return false;
        int tar = nums.back();
        int posv = mp[val], posr = mp[tar];   //获取删除值和末尾的值的在mp的位置
        swap(nums[posv], nums[posr]);
        nums.pop_back();
        //update mp,hp operate the k not the value, so swap the key's pos, and
        //the value's pos will floow swap
        swap(mp[val], mp[tar]);
        mp.erase(val);
        return true;
        
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];   //为什么是取余，nums%n = [0, n-1],喵喵喵
    }
private:
    vector<int> nums;       //数组
    unordered_map<int, int> mp; //k-v nums[i]-pos
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */