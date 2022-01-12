class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current=0, previous=0;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1)
                ++current;
            else {
                if(current > previous)
                    previous = current;
                current = 0;
            }
        }
        
        if(current > previous)
            return current;
        return previous;
    }
};
