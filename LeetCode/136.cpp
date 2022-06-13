#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  13-06-2022
    Language: C++
    OJ: LeetCode
    Problem: [136. Single Number]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int number;
        bool isFound;

        if(nums.size()==1)
            return nums[0];
        else {
            isFound = false;
            for(int i=1; i<nums.size(); i+=2) {
                if(nums[i]!=nums[i-1]){
                    number = nums[i-1];
                    isFound = true;
                    break;
                }
            }
            if(!isFound)
                number = nums[nums.size()-1];
            return number;
        }
    }
};

int main()
{
    fastIO();

    return 0;
}


