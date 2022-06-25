class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c = 0,j = 0;
        int n = nums.size();
        vector<int> v;
        v = nums;
        for(int i = 1;i < n;++i){
            if(nums[i - 1] > nums[i]){
                nums[i] = nums[i - 1];
                c++;
            }
        }
        
        for(int i = 1;i < n;++i){
            if(v[i - 1] > v[i]){
                v[i - 1] = v[i];
                j++;
            }
        }
        
        if(c > 1 && j > 1)
            return 0;
        if(c < 2){
        for(int i = 1;i < n;++i){
            
            if(nums[i - 1] > nums[i]){
              
                return 0;
            }
        }    
        }
        else if(j < 2){
        for(int i = 1;i < n;++i){
            if(v[i - 1] > v[i]){
               
                return 0;
            }
        }
        }
        
        return 1;
    }
};