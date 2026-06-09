class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.empty()){
            return {};
        }

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];

        for (int x = 0; x < n - 2; x++) {
            // if(x>0 && nums[x]==nums[x-1]) continue;

            int i = x + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[x] + nums[i] + nums[j];

                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                    // i++;
                    // j--;

                    // while(i<j && nums[i]==nums[i-1]) i++;
                    // while(i<j && nums[j]==nums[j+1]) j--;
                }

                if (sum == target)
                    return target;
                else if (sum < target)
                    i++;
                else
                    j--;
            }
        }

        return ans;
    }
};