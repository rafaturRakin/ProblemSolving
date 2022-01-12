class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int totalNumber = 0, currentNumber, digits;
        
        for(int i=0; i<nums.size(); i++) {
            currentNumber = nums[i];
            digits = 0;
            while(currentNumber > 0) {
                currentNumber /= 10;
                ++digits;
            }
            
            if(digits%2==0)
                ++totalNumber;
        }
        
        return totalNumber;
    }
};
