class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        vector<int> arr (256,-1);
        vector<int> visited (256,0);
        vector<int> visited1 (256,0);
        for(int i=0;i<n;i++){
            if(visited[s[i]]==1 or visited1[t[i]]==1){
                if(arr[s[i]]!=t[i]-'a') return false;
            }
            else{
                visited[s[i]]=1;
                visited1[t[i]]=1;
                arr[s[i]]=t[i]-'a';
            }
        }
        return true;
    }
};
