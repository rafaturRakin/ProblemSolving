#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  13-06-2022
    Language: C++
    OJ: LeetCode
    Problem: [217. Contains Duplicate]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
            if(mp[nums[i]]>=2)
                return true;
        }

        return false;
    }
};

int main()
{
    fastIO();

    return 0;
}

