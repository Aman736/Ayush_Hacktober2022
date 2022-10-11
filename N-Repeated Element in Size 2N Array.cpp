class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
            {
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};
