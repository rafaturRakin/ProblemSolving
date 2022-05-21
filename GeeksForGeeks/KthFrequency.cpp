#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  21-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Kth Frequency]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test, N, K, num;
    bool hasFound;

    cin >> test;

    while(test--)
    {
        cin >> N >> K;
        map <int, int> mp;
        hasFound = false;

        for(int i=0; i<N; i++)
        {
            cin >> num;
            mp[num]++;
        }

        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            if(i->second > K)
            {
                hasFound = true;
                cout << i->first << " ";
            }
        }

        if(!hasFound)
            cout << "-1";
        cout << endl;
    }

    return 0;
}
