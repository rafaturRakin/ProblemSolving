#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  -04-2022
    Language: C++
    OJ: HackerRank
    Problem: [Palindromic String]
*/

string reverseString(string str)
{
    for(int i=0, j=str.size()-1; i<j; i++, j--)
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    return str;
}

int main()
{
    string s;
    cin >> s;

    if(s==reverseString(s))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
