class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, n = nums.size(), j = n-1;
        vector<int>ans(n);
        int k = n-1;
        while(i <= j)
        {
            if(abs(nums[i]) < abs(nums[j]))
                ans[k--] = pow(nums[j--], 2);
            else
                ans[k--] = pow(nums[i++], 2);
        }
        return ans;
    }
};
