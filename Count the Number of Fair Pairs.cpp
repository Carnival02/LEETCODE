class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long res=0;
        sort(nums.begin(),nums.end());
         int n = nums.size();
        int lo = 0, s = n-1, t = n-1;

        while(lo < n){
            while(s >= 0 && nums[lo] + nums[s] >= lower){
                s--;
            }
            while(t >= 0 && nums[lo] + nums[t] > upper){
                t--;
            }
            res += (t - s) - ((lo > s && lo <= t) ? 1 : 0);
            lo++;
        }

        return res/2;
    }
};
