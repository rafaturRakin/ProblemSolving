#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  15-06-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Little Jhool and the Magical Jewels]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test, r, u, b, y, length, result;
    string input;

    cin >> test;

    while(test--)
    {
        cin >> input;
        length = input.size();
        r = u = b = y = result = 0;

        for(int i=0; i<length; i++)
        {
            if(input[i]=='r')
                ++r;
            else if(input[i]=='u')
                ++u;
            else if(input[i]=='b')
                ++b;
            else if(input[i]=='y')
                ++y;
        }

        if(r==0 || u==0 || b==0 || y==0)
            result = 0;
        else
        {
            result = min(r, u);
            result = min(result, b);
            result = min(result, y);
        }

        cout << result << endl;
    }

    return 0;
}
