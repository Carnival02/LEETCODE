//question no..1365

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n=nums.size()-1;
        vector<int>ans;
        
        for(int i=0;i<n+1;i++){
            int count=n;
            for(int j=0;j<n+1;j++){
                if(i==j){
                    continue;
                    
                    
                }if(nums[j]>=nums[i]){
                    count--;
                }
                
            }
            ans.push_back(count);
        }
        

        return ans ;
    }
};
