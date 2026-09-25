class Solution {
public:
    void solve(int ind,int n,string s,vector<string>& ans){
        if(s.length()==n){
            ans.push_back(s);
            return ;
        }
        solve(ind+1,n,s+"1",ans);
        if(s.empty()||s.back()!='0'){
            solve(ind+1,n,s+"0",ans);
        }
        
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        solve(0,n,"",ans);
        return ans;
    }
};