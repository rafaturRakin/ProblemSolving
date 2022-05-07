#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  04-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Compiler Version]
*/

int main()
{
    string out[2000], str;
    int i = 0, len, j;
    bool comment;

    while(getline(cin, str) && str.size()!=0)
    {
        comment = true;
        len = str.size();
        for(j=0; j<len;)
        {
            if(comment && str[j]=='-' && str[j+1]=='>')
            {
                j+=2;
                out[i].push_back('.');
            }
            else if(str[j]=='/' && str[j+1]=='/')
            {
                comment = false;
                out[i].push_back(str[j]);
                out[i].push_back(str[j+1]);
                j+=2;
            }
            else
            {
                out[i].push_back(str[j]);
                ++j;
            }
        }
        ++i;
    }

    len = i-1;
    for(i=0; i<=len; i++)
        cout << out[i] << endl;

    return 0;
}
