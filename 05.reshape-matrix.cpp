class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int size = mat.size();
        int col = mat[0].size();
        vector<int> temp;
        vector<vector<int>> res (r, vector<int>(c));
        int count=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<col;j++){
                temp.emplace_back(mat[i][j]);
                
            }
        }
        if(r*c!=size*col) return mat;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j]=temp[count++];
            }
        }
        return res;
        
    }
};
