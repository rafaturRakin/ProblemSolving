#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  11-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Decode]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test, length, i;
    string input, result;

    cin >> test;

    while(test--)
    {
        cin >> input;
        length = input.size();

        result = "";
        for(i=length-2; i>=0; i-=2)
            result.push_back(input[i]);

        if(length%2)
            i = 0;
        else
            i = 1;

        for( ;i<length; i+=2)
            result.push_back(input[i]);

        cout << result << "\n";
    }

    return 0;
}
