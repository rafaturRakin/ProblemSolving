#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Cost of balloons]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, costGreen, costPurple, num, first, second, x, y;

    cin >> test;

    while(test--)
    {
        cin >> costGreen >> costPurple;
        cin >> num;

        first = second = 0;

        for(int i=0; i<num; i++)
        {
            cin >> x >> y;
            first += x;
            second += y;
        }

        x = (first * costGreen) + (second * costPurple);
        y = (first * costPurple) + (second * costGreen);

        if(x <= y)
            cout << x << endl;
        else
            cout << y << endl;
    }

    return 0;
}
