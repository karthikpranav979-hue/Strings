class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(i==(nums.size()-1) or nums[i]!=nums[i+1]-1){
                ans=s;
                break;
            }
            
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        auto ind=find(nums.begin(),nums.end(),ans);
        for(auto i=ind-nums.begin();i<nums.size();i++){
            if(i==nums.size()-1 or  nums[i+1]!=nums[i]+1){
                ans=nums[i]+1;
                break;
            }     
        }
        return ans;
    }
};
