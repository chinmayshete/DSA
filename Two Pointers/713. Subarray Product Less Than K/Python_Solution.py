class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k<=1:
            return 0

        n = len(nums)
        start = 0
        cnt = 0
        product = 1

        for end in range(n):
            product *= nums[end]

            while product >= k:
                product //= nums[start]
                start+=1

            cnt += end - start + 1
        
        return cnt