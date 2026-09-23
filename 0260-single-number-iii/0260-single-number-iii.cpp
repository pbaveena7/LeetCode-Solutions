class Solution{
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
            sum=sum^num;
        }
        unsigned int x=(unsigned int)sum;
        int bit=x &-x; 
        int a=0;
        int b=0;
        for(int num:nums){
            if(num & bit){
                a=a^num;
            }else{
                b=b^num;
            }
        }
        return {a,b};
    }
};
        
    
