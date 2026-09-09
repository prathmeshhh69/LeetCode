class Solution {
public:
    long long countCommas(long n) {
        long ans=0;
        for(long int start=1000; start<=n; start*=1000)ans+=n-start+1;
        return ans;
    }
};