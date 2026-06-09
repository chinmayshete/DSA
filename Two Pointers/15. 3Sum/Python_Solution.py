class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        if not nums:
            return []
        
        nums.sort()
        size = len(nums)
        ans=[]

        if size==3 and (nums[0]+nums[1]+nums[2])==0:
            return [[nums[0],nums[1],nums[2]]]

        for x in range(size-2):
            if x>0 and nums[x]==nums[x-1]:
                continue
            i=x+1
            j=size-1
            while i<j:
                sum = nums[x]+nums[i]+nums[j]
                if sum == 0:
                    ans.append([nums[x],nums[i],nums[j]])
                    i+=1
                    j-=1

                    while i<j and nums[i]==nums[i-1]:
                        i+=1

                    while i<j and nums[j]==nums[j+1]:
                        j-=1

                elif sum<0:
                    i+=1

                else:
                    j-=1

        return ans

