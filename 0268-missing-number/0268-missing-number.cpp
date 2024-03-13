#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> array;
        
        for (int i = 0; i <= n; ++i) {
            array.push_back(i);
        }
        
        // Find the missing number
        for(int num : array)
        {
            bool found = false;
            for(int x : nums)
            {
                if(x==num)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                return num;
            }
        }
      
        return -1; 
    }
};
