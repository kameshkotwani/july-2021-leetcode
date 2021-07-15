class Solution {
   public:
   string customSortString(string S, string T) {
      string ret = "";
      unordered_map <char, int> m;
      for(int i = 0; i < T.size(); i++){
         m[T[i]]++;
      }
      for(int i = 0; i < S.size(); i++){
         char x = S[i];
         for(int j = 0; j < m[x]; j++){
            ret += x;
         }
         m[x] = 0;
      }
      unordered_map <char, int> :: iterator it = m.begin();
      while(it != m.end()){
         if(it->second > 0){
            for(int i = 0; i < it->second; i++)ret += it->first;
         }
         it++;
      }
      return ret;
   }
};
