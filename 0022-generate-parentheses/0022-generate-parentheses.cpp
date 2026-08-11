class Solution {
public:
    vector<string>ans;
    void solve(string s, int open, int closed, int n){
        if(s.size() == 2*n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            solve(s + "(", open + 1, closed, n);
        }
        if(closed < open){
            solve(s + ")", open, closed + 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve("", 0, 0, n);
        return ans;
        
    }
};