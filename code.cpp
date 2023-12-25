class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int setBitCount=0;
        int sum=0;
        int copyNum;
        for(int i=0;i<nums.size();i++)
        {
            setBitCount=0;
            copyNum=i;
            while(copyNum)
            {
                if(copyNum & 1 == 1)
                    setBitCount++;
                copyNum=copyNum>>1;
            }
            if(setBitCount==k)
                sum=sum+nums[i];
        }
        return sum;
    }
};
