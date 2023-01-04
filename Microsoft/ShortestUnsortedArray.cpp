class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int i=0,j=n-1;
        for(;i<n;i++)
        {
            if(nums[i]!=temp[i])
                break;
        }

        for(;j>=0;j--)
        {
            if(nums[j]!=temp[j])
                break;
        }
        int c=0;
        for(int k=i;k<=j;k++)
            c++;
        return c;
    }
};


//Run Time = 76ms
//Memory = 27.3MB
