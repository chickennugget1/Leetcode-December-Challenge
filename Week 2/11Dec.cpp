class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int>m;
        int ans = nums.size(), i = 0;
        while(i < nums.size())
        {
            if(i == ans)
                break;
            if(m[nums[i]] >= 2)
            {
                ans--;
                swap(nums[i],nums[ans]);
            }
            else
            {
                m[nums[i]]++;
                i++;
            }
        }
        sort(nums.begin(), nums.begin()+ans);
        return ans;
    }
};
