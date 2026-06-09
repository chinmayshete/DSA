class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty()) return {};

        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;

        for(int x=0;x<n-2;x++){

            if(x>0 && nums[x]==nums[x-1]){
                continue;
            }

            int i=x+1;
            int j=n-1;

            while(i<j){
                

                int sum=nums[x]+nums[i]+nums[j];

                if(sum==0){
                    ans.push_back({nums[x],nums[i],nums[j]});
                    i++;
                    j--;

                    while(i<j && nums[i]==nums[i-1]){
                        i++;
                    }
                    while(i<j && nums[j]==nums[j+1]){
                        j--;
                    }
                }
                else if(sum<0){
                    i++;
                }
                else{
                    j--;
                }
            }
        }

        return ans;
        
    }
};