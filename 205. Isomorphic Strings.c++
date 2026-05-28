class Solution {
public:
    bool help(string s1,string s2){
        map <char,char>mp;
        for (int i=0;i<s1.length();i++){
            if(mp.find(s1[i])==mp.end()){
                mp[s1[i]]=s2[i];
            }
            else if(mp[s1[i]]!=s2[i]){
                return false;
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return help(s,t) && help(t,s);
    }
};
