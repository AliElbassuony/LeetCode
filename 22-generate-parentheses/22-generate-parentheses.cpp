class Solution {
public:
    vector<string> st;
    
    void rec(int l,int r, string s){
        if(!l && !r){
            st.push_back(s);
            return;
        }
        
        if(l)
            rec(l - 1,r,s + '(');
        if(r > l)
            rec(l, r - 1, s + ')');
        
    }
    
    vector<string> generateParenthesis(int n) {
        rec(n,n,"");
        return st;
    }
};