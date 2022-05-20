class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sum(n);
        sum[0] = nums[0];
        
        for(int i = 1;i < n;++i)
            sum[i] = sum[i - 1] + nums[i];
        
        long long avg1 = 0,avg2 = 0,avg = 0;
        int ans = 1e7 + 19,idx = 0;
        for(int i = 0;i < n;++i){
            avg1 = sum[i] / (i + 1);
            avg2 = (sum[n - 1] - sum[i]) / ((n - i - 1) ? (n - i - 1) : 1);
            avg = abs(avg1 - avg2);
            if(ans > avg){
                if(ans == avg)
                    idx = min(idx,i);
                idx = i;
                ans = avg;   
            }

        }
        
        return idx;
    }
};