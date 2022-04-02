#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  02-04-2022
    Language: C++
    OJ: HackerRank
    Problem: [Remove Character]
*/

string removeCharacter(string s1, string s2)
{
    string res;
    for(int j=0; j<s2.size(); j++)
    {
        res = "";
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[j])
                res.push_back(s1[i]);
        }
        s1 = res;
    }
    return res;
}

int main()
{
    string first, second, result;
    cin >> first >> second;

    result = removeCharacter(first, second);

    cout << result << endl;

    return 0;
}
