/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 231 A
    Date : 24-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test, a, b, c, amount = 0, i, sum;
    cin >> test;
    for(i=0; i<test; i++)
    {
        cin >> a >> b >> c;
        sum = a + b + c;
        if(sum>=2)
            ++amount;
    }

    cout << amount << "\n";

    return 0;
}
