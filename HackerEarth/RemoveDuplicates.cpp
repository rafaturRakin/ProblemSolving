#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  03-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Remove Duplicates]
*/

int main()
{
    string str;
    int len, i, arr[26]= {0};

    cin >> str;
    len = str.size();

    for(i=0; i<len; i++)
    {
        if(arr[str[i]-'a']==0)
        {
            arr[str[i]-'a'] = 1;
            cout << str[i];
        }
    }

    cout << endl;
    return 0;
}
