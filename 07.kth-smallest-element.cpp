class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> vals;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vals.emplace_back(matrix.at(i).at(j));
            }
        }
        sort(vals.begin(),vals.end());
        return vals.at(k-1);
    }
};
