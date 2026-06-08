class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:

        if not nums:
            return []

        n = len(nums)
        left = 0
        right = n-1
        id = n-1
        ans = [0]*n

        while left <= right:

            l = nums[left] * nums[left]
            r = nums[right] * nums[right]

            if(l > r):
                ans[id] = l
                left += 1

            else:
                ans[id] = r
                right -= 1
            
            id-=1

        return ans