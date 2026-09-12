class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> match;
        for(int i = 0; i < nums.size(); i++){
            match[nums[i]]++;
            if(match[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};