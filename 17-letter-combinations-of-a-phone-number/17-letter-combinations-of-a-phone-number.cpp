class Solution {
public:
    map<char,string> m;
    
    vector<string> v;
    
    void rec(string s,string str,int idx){
        if(str.size() == s.size()){
            if(!str.empty())
                v.push_back(str);
            return;
        }
        
        char it = s[idx];
        for(auto i : m[it])
            rec(s,str + i ,idx + 1);
        
    }
    vector<string> letterCombinations(string digits) {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        rec(digits, "", 0);
        
        return v;
    }
};