class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        if(arr.size() < 3)
            return false;
        int n = arr.size();
        int cnt = 0,i,j;
        if(arr[0] >= arr[1])
            return false;
        if(arr[n-1] >= arr[n-2])
            return false;
        for(i = 0; i < n-1; i++)
        {
            if(arr[i] >= arr[i+1])
            {
                cnt++;
                break;                
            }
            
        }
        for(j = i; j < n-1; j++)
        {
            if(arr[j] <= arr[j+1])
                cnt++;
        }
        return cnt == 1;
    }
};
