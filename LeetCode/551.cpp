#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  01-04-2022
    Language: C++
    OJ: LeetCode
    Problem: [Student Attendance Record I]
*/

bool checkRecord(string s)
{
    int totalAbsent = 0, consecutiveLate=0;
    for(int i=0; i<s.size(); i++)
    {
        consecutiveLate = 0;
        if(s[i]=='A')
            ++totalAbsent;
        else if(s[i]=='L')
        {
            consecutiveLate++;
            int j=i+1;
            while(j<s.size() && s[j++]=='L')
                ++consecutiveLate;
        }
        if(consecutiveLate>=3 || totalAbsent>=2)
            return false;
    }
    return true;
}

int main()
{
    string attendance;
    cin >> attendance;

    cout << checkRecord(attendance);
    return 0;
}
