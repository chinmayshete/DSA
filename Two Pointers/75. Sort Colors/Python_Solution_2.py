class Solution:
    def sortColors(self, nums: List[int]) -> None:

        freq = {}

        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        
        idx = 0
        for value in range(min(nums),max(nums)+1):
            if value in freq:
                for _ in range(freq[value]):
                    nums[idx]=value
                    idx+=1
