class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        size=len(numbers)
        start=0
        end=size-1
        ans=[]

        while(start<end):
            sum=numbers[start]+numbers[end]
            if (target == sum):
                ans.append(start+1)
                ans.append(end+1)
                return ans
            elif (sum>target):
                end=end-1
            else:
                start=start+1
        return ans