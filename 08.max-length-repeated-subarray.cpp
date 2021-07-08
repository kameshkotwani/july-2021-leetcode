class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m = nums2.size();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++)
                dp[i][j]=0;
         for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (nums1[i] == nums2[j])
                dp[j][i] = dp[j + 1][i + 1] + 1;
        }
    }
    int maxm = 0;
 
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            maxm = max(maxm, dp[i][j]);
        }
    }
 

    return maxm;
        
    }
};
