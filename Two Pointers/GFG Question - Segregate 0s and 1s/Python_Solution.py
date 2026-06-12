class Solution:
    def segregate0and1(self, arr):
        # code here
        n = len(arr)
        left=0
        right=n-1
        
        while(left<right):
            if(arr[left]==0):
                left+=1
            
            elif(arr[right]==1):
                right-=1
                
            else:
                #swap the 0 ans 1
                arr[left],arr[right]=arr[right],arr[left]