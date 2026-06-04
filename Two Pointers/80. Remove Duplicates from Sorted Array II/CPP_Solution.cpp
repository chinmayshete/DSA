class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        if (nums.size() <= 2) return nums.size();

        int start=2;
        int end=2;

        while(end<nums.size()){
            if(nums[start-2]!=nums[end]){
                nums[start]=nums[end];
                start++;
            }
            end++;
        }
        return start;
    }
};