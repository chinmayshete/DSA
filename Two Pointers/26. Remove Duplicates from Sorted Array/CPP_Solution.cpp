class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int start=0;
        int end=1;

        while(end<nums.size()){
            if(nums[start]!=nums[end]){
                start++;
                nums[start]=nums[end];
            }
            end++;
        }
        return start+1;
    }
};