#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  04-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Ashish and Binary Matrix]
*/

int main()
{
    int test, row, col, i, j;
    cin >> test;
    cin.ignore();

    while(test--)
    {
        cin >> row >> col;
        bool ans = true;
        string inp[row];
        for(i=0; i<row; i++)
            cin >> inp[i];

        for(i=0; i<row-1; i++)
        {
            for(j=i+1; j<row; j++)
            {
                if(inp[i]==inp[j])
                {
                    ans = false;
                    break;
                }
            }
            if(!ans)
            {
                cout << "No\n";
                break;
            }
        }

        if(ans)
            cout << "Yes\n";
    }

    return 0;
}
