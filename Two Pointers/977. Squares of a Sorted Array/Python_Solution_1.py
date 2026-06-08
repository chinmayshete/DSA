class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:

        if not nums:
            return []

        n =len(nums)
        neg=[]
        pos=[]

        for num in nums:
            if num < 0:
                neg.append(num)
            else:
                pos.append(num)
            # neg = [x**2 for x in neg]
            # pos = [x**2 for x in pos]
            # neg.reverse()

        ps = len(pos)
        ns = len(neg)

        if ps==0:
            neg = [x**2 for x in neg]
            neg.reverse()
            return neg

        if ps==0:
            pos = [x**2 for x in pos]
            return pos

        
        i=j=0
        ans=[]
        neg = [x * x for x in neg][::-1] #sq, reverse
        pos = [x * x for x in pos]

        while i<ns and j<ps:
            if(neg[i] <= pos[j]):
                ans.append(neg[i])
                i+=1
            
            else:
                ans.append(pos[j])
                j+=1
        
        while i<ns:
            ans.append(neg[i])
            i+=1

        while j<ps:
            ans.append(pos[j])
            j+=1
        
        return ans

        