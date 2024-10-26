class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        // int begin = nums[0];
        // int end = nums.size() -1;
        sort(nums.begin(), nums.end());
            for(int i = 1; i<nums.size(); i++){
                if(nums[i] == nums[i-1]){
                    result.push_back(nums[i]);
                }
            }
            return result;
    }
};