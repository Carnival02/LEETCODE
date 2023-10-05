

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> elementcount;
        for(int i=0;i<nums.size();i++){
            elementcount[nums[i]]++;
        }
        vector<int> majorityElements;
        int threshold = nums.size() / 3;
        for(auto elementCountPair : elementcount) {
        int element = elementCountPair.first;
        int count = elementCountPair.second;
           if(count > threshold) {
                majorityElements.push_back(element);
            }
        }
        
        return majorityElements; 


        
    }
};
