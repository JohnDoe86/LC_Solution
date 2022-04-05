//LeetCode 206.Count Primes
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

class Solution{
public:
    int countPrime(int n){
        if (n < 3) return 0;               //0:not Prime; 1:Prime
        vector<unsigned char> f(n, 1); //Initially all the elements are Primes
        f[0] = f[1] = 0;
        for(long i = 2; i < sqrt(n); ++i){
            if(!f[i]) continue;
            for(long j = i*i; j < n; j += i)
                f[j] = 0;
        }
        int ans = accumulate(f.begin(), f.end(), 0);
        return ans;
    }
};

int main(){
    cout<<"Please input a number";
    int a;
    cin>>a;
    Solution test;
    int b = test.countPrime(a);
    cout<<b<<endl;


}
