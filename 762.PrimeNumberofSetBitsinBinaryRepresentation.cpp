class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i = left; i<=right; i++){
            int count = count1(i);
            if(prime(count)) res++;
        }
        return res;
    };

    int count1(int n){  //count how many 1;
        int count = 0;
        while(n){
            if (n&1 == 1) count++;
            n = n>>1;
        }
        return count;
    };

    bool prime(int count){   //whether prime or not;
        vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31};
        for (auto x : prime) {
            if (count == x) {
                return true;
            }
        }
        return false;
    };
};