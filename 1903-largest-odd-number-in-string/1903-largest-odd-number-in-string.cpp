class Solution {
public:
    string largestOddNumber(string num) {
      int largest=-1;
      for(int i=0;i<num.size();i++){
        if((num[i]-'0')%2==1){
            largest=i;
        }
      }
      if(largest==-1) return "";
      return num.substr(0,largest+1);
    }
};