class Solution {
public:
    string f1(string s1,int m){
            string p1=s1.substr(0,m);
            string p2=s1.substr(m,s1.size());
            string ret="";
            for(int i=m-1;i>=0;i--){
                ret+=p1[i];
            }
            return ret+p2;
        }
    string reverseStr(string s, int k) {
        vector<string> v1;
        while(s!=""){
            v1.push_back(s.substr(0,(2*k)));
            s.erase(0,(2*k));
        }
        
       
        int n=v1.size();
        for(int i=0;i<n;i++){
            if(v1[i].size()==(2*k)){
                v1[i]=f1(v1[i],k);
            }
            else if(v1[i].size()<k){
                v1[i]=f1(v1[i],v1[i].size());
            }
            else if(v1[i].size()<(2*k) and v1[i].size()>=k){
                v1[i]=f1(v1[i],k);
            }
        }


        string ans="";
        for(int i=0;i<v1.size();i++){
            ans+=v1[i];
        }
        return ans;
    
    }
};
