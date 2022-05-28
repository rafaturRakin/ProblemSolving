#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [GPL]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, length;
    unsigned long long int result, multiplier;
    string input;

    cin >> test;

    while(test--)
    {
        cin >> length >> input;
        result = 0LL;
        multiplier = 1LL;

        for(int i=length-1; i>=0; i--)
        {
            if(input[i]=='1')
                result += multiplier;
            multiplier *= 2LL;
        }

        cout << result << endl;
    }

    return 0;
}

