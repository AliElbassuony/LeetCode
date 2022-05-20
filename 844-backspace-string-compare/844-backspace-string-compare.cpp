class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "",s2 = "";
        for(auto i : s){
            if(i != '#')
                s1.push_back(i);
            else
                if(s1.size() > 0)
                    s1.pop_back();
        }
        
        for(auto i : t){
            if(i != '#')
                s2.push_back(i);
            else
                if(s2.size() > 0)
                    s2.pop_back();
        }
        
        
            return (s1 == s2 ? 1 : 0);
    }
};