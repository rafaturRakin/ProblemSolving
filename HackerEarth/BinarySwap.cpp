#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  10-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Binary Swap]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    string first, second;
    int length, zeros, ones, points;

    cin >> first >> second;

    zeros = ones = points = 0;
    length = first.size();

    for(int i=0; i<length; i++)
    {
        if(first[i]!=second[i])
            ++points;
        if(first[i]=='1')
            ++ones;
        if(first[i]=='0')
            ++zeros;
        if(second[i]=='1')
            --ones;
        if(second[i]=='0')
            --zeros;
    }

    if(ones!=0 || zeros!=0)
        cout << -1 << "\n";
    else
        cout << points/2 << "\n";
    return 0;
}
