class Solution {
public:
    int triangleNumber(vector<int>& nums) {
    int n=nums.size(),ret=0;
    sort(nums.begin(),nums.end());
    for(int i=n-1;i>=0;i--){
        int right=i-1;
        int left=0;
        while(left<right){
            int sum = nums.at(left)+nums.at(right);
            if(sum>nums.at(i)){
                ret += right-left;
                right--;
                    
            }else{
                left++;
            }
            
        }
    } 
        return ret;
        
    }
};
