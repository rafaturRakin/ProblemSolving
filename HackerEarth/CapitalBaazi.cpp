#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [CapitalBaazi]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    string input;
    int length;

    getline(cin, input);

    length = input.size();

    for(int i=0; i<length; i++)
    {
        if(input[i]==' ')
            cout << "\n";
        else
            cout << char(input[i]-32);
    }

    return 0;
}
