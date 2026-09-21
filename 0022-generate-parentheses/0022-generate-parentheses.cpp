class Solution {
public:
    void generate(int ob,int cb,int n ,string &ans,vector<string>& res){
        if(ans.length()==n*2){
            res.push_back(ans);
        }
        if(ob<n){
            ans.push_back('(');
            generate(ob+1,cb,n,ans,res);
            ans.pop_back();
        }
        if(cb<ob){
             ans.push_back(')');
            generate(ob,cb+1,n,ans,res);
            ans.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string ans;
        generate(0,0,n,ans,res);
        return res;
    }
};