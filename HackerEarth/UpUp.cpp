#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  03-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [UpUp]
*/

int main()
{
    int i, len;
    bool isChar = true;
    string inp;

    getline(cin, inp);

    len = inp.size();

    for(i=0; i<len; i++)
    {
        if(inp[i]==' ')
            isChar = true;
        else if(inp[i] != ' ' && isChar)
        {
            isChar = false;
            inp[i] = toupper(inp[i]);
        }
        cout << inp[i];
    }
    cout << endl;
    return 0;
}
