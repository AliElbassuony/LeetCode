class Solution {
public:
     vector<int> arr = {1,2,4,8,16,32,1,2,4,8};
     bool vis[33];
    
    vector<string> v;
    
    string shape(int h,int m){
        string s1 = to_string(h);
        string s2 = to_string(m);
        string s3 = "";
        if(m < 10)
            s3 = "0";
        s3 += s2;
        string str = s1 + ':' +s3;
        return str;
    }
    
    void solve(int n,int h,int m,int idx){
        if(n == 0){
            string s = shape(h,m);
            v.push_back(s);
            return;
        }
        
        // check valid
            for(int i = idx;i < 10;++i){
                if(vis[i])
                    continue;
                
                if(i < 6){
                    if(m + arr[i] <= 59){
                        vis[i] = 1;
                        solve(n - 1,h,m + arr[i],i + 1);
                        vis[i] = 0;
                    }
                } else {
                    if(h + arr[i] <= 11){
                        vis[i] = 1;
                        solve(n - 1,h + arr[i],m,i + 1);
                        vis[i] = 0;
                    }
                }
            }
    }
    
    vector<string> readBinaryWatch(int turnedOn) {
        if(turnedOn > 8)
            return v;
        
        solve(turnedOn,0,0,0);
        
        return v;
    }
};