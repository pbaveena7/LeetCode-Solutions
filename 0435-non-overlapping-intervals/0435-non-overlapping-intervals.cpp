class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int cnt=1;
        int last=intervals[0][1];
        
        for(int i=0;i<n;i++){
            if(intervals[i][0]>=last){
                cnt++;
                last=intervals[i][1];
            }
        }
        return n-cnt;
    }
};