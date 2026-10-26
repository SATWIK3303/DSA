class Solution {
public:
    void backtrack(string s,int open,int close,int n,vector<string>& ans){
        if(s.size()==n*2){
            ans.push_back(s);
            return;
        }
        if(open<n){
            backtrack(s+"(",open+1,close,n,ans);
        }
        if(open>close){
            backtrack(s+")",open,close+1,n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack("",0,0,n,ans);
        return ans;
        
    }
};