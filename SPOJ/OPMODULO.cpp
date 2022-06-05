#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  05-06-2022
    Language: C++
    OJ: SPOJ
    Problem: [OPMODULO - "Operation - Modulo"]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    long long int a, b, x, i, temp, sum;
    x = i = -1;
    sum = 0;

    cin >> a >> b;

    while(true)
    {
        ++i;
        temp = pow(2, i);
        if(temp>=a && temp<=b)
        {
            x = temp;
            break;
        }
        if(temp > b)
            break;
    }

    while(x<=b && x!=-1)
    {
        sum += x;
        x = x * 2;
    }

    if(sum<=0)
        cout << 0;
    else
        cout << sum;

    return 0;
}
