class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n=arr.size();
        int low=0,high=n-k,mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(x-(arr.at(mid))>arr.at(mid+k)-x) low=mid+1;
            else high=mid;
        }
        for(int i=low;i<low+k;i++){
            ans.emplace_back(arr.at(i));
        }
        return ans;
    }
};
