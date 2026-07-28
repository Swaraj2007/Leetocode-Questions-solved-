class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]< target){
                count++;
            }
        }
        return count;
    }
};