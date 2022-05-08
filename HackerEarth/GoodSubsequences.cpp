#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  08-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Good Subsequences]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    const long long int modulo = 1e9 + 7;
    long long int chars[26], test, length, result;
    string input;

    cin >> test;

    while(test--)
    {
        result = 1;
        for(int i=0; i<26; i++)
            chars[i] = 0;

        cin >> input;
        length = input.size();

        for(int i=0; i<length; i++)
            chars[input[i] - 'a']++;

        for(int i=0; i<26; i++)
        {
            if(chars[i])
                result = (chars[i] * result) % modulo;
        }

        cout << result << "\n";
    }

    return 0;
}
