#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  08-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Rotation]
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
    int length, current, maximum;

    cin >> length >> first >> second;

    maximum = current = 0;
    for(int i=0; i<length; i++)
    {
        current = 0;
        int k = i;
        for(int j=0; j<length; j++)
        {
            if(first[k]!=second[j])
                break;

            ++current;
            ++k;
        }

        if(current>=maximum)
            maximum = current;
    }

    cout << length - maximum << "\n";

    return 0;
}
