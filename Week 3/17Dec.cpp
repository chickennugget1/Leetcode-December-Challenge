class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int n = A.size();
        unordered_map<int, int>m;
        int cnt = 0;
        for(auto a : A)
        {
            for(auto b : B)
            {
                m[a+b]++;
            }
        }
        for(auto c : C)
        {
            for(auto d : D)
            {
                if(m.find(0-(c+d)) != m.end())
                    cnt += m[-c-d];
            }
        }
        return cnt;
    }
};
