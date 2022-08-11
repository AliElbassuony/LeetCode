class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        
        vector<string> v;
        
        for(auto i : nums){
            v.push_back(to_string(i));
            
        }
        int c =0;
        for(auto i : v){
            if(!(i.size() & 1))
               c++;
        }
        return c;
    }
};