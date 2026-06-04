class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        start = 2
        end = 2
        while(end < len(nums)):
            if(nums[start-2]!=nums[end]):
                nums[start]=nums[end]
                start+=1
            end+=1

        return start