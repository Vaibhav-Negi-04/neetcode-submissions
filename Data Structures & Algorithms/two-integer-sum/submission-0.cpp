class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
           int req=target-num;
            if(seen.count(req))
            return {seen[req],i};
            seen[num]=i;
        }
        return {};

    }
};
