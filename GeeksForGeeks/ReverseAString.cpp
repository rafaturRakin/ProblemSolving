#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  02-04-2022
    Language: C++
    OJ: GeeksForGeeks
    Problem: [Reverse a String]
*/

string reverseWord(string str);

int main()
{
    string s;
    cin >> s;
    cout << reverseWord(s) << endl;
    return 0;
}

string reverseWord(string str)
{
    for(int i=0, j=str.size()-1; i<j; i++, j--)
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    return str;
}
