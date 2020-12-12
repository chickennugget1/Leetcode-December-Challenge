class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int, int>m;
        for(auto it: nums)
        {
            if(it % 60 == 0)
                cnt += m[0];
            else
                cnt += m[60 - (it % 60)];
            m[it % 60]++;
        }
        return cnt;
    }
};
