class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        
        int space = 0;
        if (n == 0)
            return true;
        
        if(v.size() == 1 && v[0] == 0)
            return true;
        if(v.size() == 1 && v[0] == 1)
            return false;
        for(int i = 0; i < v.size(); i++)
        {
            if(i == 0)
            {
                if(v[i] == 0 && v[i+1] == 0)
                {
                    v[i] = 1;
                    space++;
                }
            }
            else if(i == v.size()-1)
            {
                if(v[i-1] == 0 && v[i] == 0)
                {
                    v[i] = 1;
                    space++;
                }
            }
            else if(v[i-1] == 0 && v[i] == 0 && v[i+1] == 0)
            {
                v[i] = 1;
                space++;
            }
        }
        
        if(space >= n)
            return true;
        else
            return false;
    }
};
