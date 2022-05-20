class Solution {
public:
    vector<string> st;
    bool check(string s){
        int c = 0;
        for(auto i : s){
            if(i == '(')
                c++;
            else {
                if(c)
                    c--;
                else
                    return false;
            }
            
                
        }
        return (c ? false : true);
    }
    
    
    void rec(int n, string s){
        if(n == 0){
            if(check(s))
                st.push_back(s);
            return;
        }
        
        rec(n - 1, s + '(');
        rec(n - 1, s + ')');
        
    }
    
    vector<string> generateParenthesis(int n) {
        rec(n*2,"");
        return st;
    }
};