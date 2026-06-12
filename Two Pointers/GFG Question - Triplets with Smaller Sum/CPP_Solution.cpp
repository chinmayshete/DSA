class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
        
        int cnt=0;
        
        for(int i=0;i<n-2;i++){
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                int total = arr[i] + arr[start] + arr[end];
                
                if(total<sum){
                    cnt += (end-start);
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return cnt;
    }
};