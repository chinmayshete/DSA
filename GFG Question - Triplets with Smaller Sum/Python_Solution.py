class Solution:
    def countTriplets(self, sum, arr):
        #code here
        arr.sort()
        n=len(arr)
        
        cnt=0
        
        for i in range(n-2):
            start=i+1
            end=n-1
            
            while start < end:
                 total = arr[i]+arr[start]+arr[end] 
                 
                 if total < sum:
                     cnt+= (end-start)
                     start+=1
                     
                 else:
                     end-=1
        
        return cnt