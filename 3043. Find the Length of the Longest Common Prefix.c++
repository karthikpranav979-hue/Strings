class Solution {
public:
    // int lcp(string s1,string s2){
    //     int k=0;
    //     while(1){
    //         if(k==s1.size() or k==s2.size() or s1[k]!=s2[k]){
    //             return k;
    //         }
    //         k++;
    //     }
    // }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    //     int max1=0;
    //     for(int i=0;i<arr1.size();i++){
    //         for(int j=0;j<arr2.size();j++){
    //             max1=max(max1,lcp(to_string(arr1[i]),to_string(arr2[j])));
    //         }
    //     }
    //     return max1;
    // }

    map<string,int>mp;
    int n;
    string k;
    n=arr1.size();
    for(int i=0;i<n;i++){
        k=to_string(arr1[i]);
        for(int j=1;j<=k.size();j++){
            mp[k.substr(0,j)]=0;
        }
    }
 
    int max1=0;
    for(int i=0;i<arr2.size();i++){
        k=to_string(arr2[i]);
        for(int j=1;j<=k.size();j++){
          if(mp.find(k.substr(0,j))!=mp.end()){
                if(max1<j){
                    max1=j;
                }
          }
        }
    }
    return max1;
    }
};
