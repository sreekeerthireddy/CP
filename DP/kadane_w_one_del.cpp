class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int dp[arr.size()][2];
        dp[0][0]=arr[0];
        dp[0][1]=0;
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            //you are doing 0 deletions
            dp[i][0]=max(arr[i], dp[i-1][0]+arr[i]);
            //you are making one deletion
            dp[i][1]=max(dp[i-1][0], dp[i-1][1]+arr[i]);
            res=max(res, max(dp[i][0], dp[i][1]));
        }

        return res;
    }
};
