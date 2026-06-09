class Solution {
  public:
    void swap_n(int &a,int &b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i=0;
        int j=n-1;
        
        while(i<j){
            if(arr[i]==0){
                i++;
            }
            else if(arr[j]==1){
                j--;
            }
            else{
                swap_n(arr[i],arr[j]);
            }
        }
    }
};