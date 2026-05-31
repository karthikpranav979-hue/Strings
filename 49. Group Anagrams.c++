 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v1;
        map<string,vector<string>> mp;
        for(auto s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        for(auto p:mp){
            v1.push_back(p.second);
        }
        return v1;
