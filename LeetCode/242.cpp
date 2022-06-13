#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  13-06-2022
    Language: C++
    OJ: LeetCode
    Problem: [242. Valid Anagram]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ch[26] = {0};
        int length1 = s.size(), length2 = t.size();

        for(int i=0; i<length1; i++)
            ch[s[i]-'a']++;

        for(int i=0; i<length2; i++)
            ch[t[i]-'a']--;

        for(int i=0; i<26; i++) {
            if(ch[i]!=0)
                return false;
        }

        return true;
    }
};

int main()
{
    fastIO();

    return 0;
}


