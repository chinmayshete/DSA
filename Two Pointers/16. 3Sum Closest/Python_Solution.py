class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:

        nums.sort()
        n = len(nums)
        ans = nums[0] + nums[1] + nums[2]

        for i in range(n - 2):
            start = i + 1
            end = n - 1

            while start < end:

                total = nums[i] + nums[start] + nums[end]

                if abs(target - total) < abs(target - ans):
                    ans = total

                if total == target:
                    return target

                elif total < target:
                    start += 1

                else:
                    end -= 1

        return ans
