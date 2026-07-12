class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>freq;
      for(char c:s){
        freq[c]++;
      }
      vector<string>bucket(s.size()+1);
      string ans="";
      for(auto it:freq){
        bucket[it.second]+=string(it.second,it.first);
      }
      for(int i=s.size();i>=0;i--){
        ans+=bucket[i];
      }
      return ans;
    }
};