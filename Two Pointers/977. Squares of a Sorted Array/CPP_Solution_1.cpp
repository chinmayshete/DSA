//splitting the array and then merging them

class Solution {
public: 
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.empty()) return {};

        int n = nums.size();
        vector<int> neg;
        vector<int> pos;

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int ns=neg.size();
        if(ns==0){
            // for_each(pos.begin(),pos.end(), [](int &x){
            //     x = x*x;
            // });
            for(int &x : pos) x *= x;
            return pos;
        }

        int ps=pos.size();
        if(ps==0){
            // for_each(neg.begin(),neg.end(), [](int &x){
            //     x = x*x;
            // });
            for(int &x : neg) x *= x;
            reverse(neg.begin(),neg.end());
            return neg;
        }
        
        int i=0,j=0;
        int id=0;
        vector<int> res(ns+ps);

        for(int &x : neg) x *= x;
        reverse(neg.begin(),neg.end());

        for(int &x : pos) x *= x;

        while(i<ns && j<ps){
            if(neg[i]<=pos[j]){
                res[id]=neg[i];
                id++;
                i++;
            }
            else{
                res[id]=pos[j];
                id++;
                j++;
            }
        }

        while(i<ns){
            res[id]=neg[i];
            id++;
            i++;
        }
        while(j<ps){
            res[id]=pos[j];
            id++;
            j++;
        }

        return res;

    }
};