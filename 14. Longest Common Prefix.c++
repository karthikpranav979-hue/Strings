class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        int k=0;
        while(1){
           for(int i=1;i<strs.size();i++){
            if(k==strs[i].size() or k==strs[0].size()){
                return strs[0].substr(0,k);
            }
            if(strs[0][k]!=strs[i][k]){
                return strs[0].substr(0,k);
            }
           }
           k++;
        }
    }
};
