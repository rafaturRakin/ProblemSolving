#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  20-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Frequencies of Limited Range Array Elements]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solution(vector<int> v, int len, int range)
{
    vector<int> solve(range+5, 0);

    for(int i=0; i<len; i++)
        solve[v[i]]++;

    for(int i=1; i<=range; i++)
        cout << solve[i] << " ";
    cout << endl;
}

int main()
{
    fastIO();

    int test, length, range;

    cin >> test;

    while(test--)
    {
        cin >> length;
        vector <int> vec(length, 0);

        for(int i=0; i<length; i++)
            cin >> vec[i];

        cin >> range;
        solution(vec, length, range);
    }

    return 0;
}
