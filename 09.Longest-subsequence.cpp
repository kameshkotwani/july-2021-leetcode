class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
        auto& subArr=nums;
        int length[n];
        for(int i=0;i<n;i++){
            length[i]=0;
        }
   length[0] = 1;   
   for (int i = 1; i < n; i++) {   
      for (int j = 0; j < i; j++) {   
         if (subArr[j] < subArr[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++;
   }
   int lis = 0;
   for (int i = 0; i<n; i++) 
      lis = max(lis, length[i]);
   return lis;
    }
};
