/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 69A
    Date : 28-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int test, x, y, z, sum_x=0, sum_y=0, sum_z=0, i;

    cin >> test;

    for(i=0; i<test; i++)
    {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if(sum_x==0 && sum_y==0 && sum_z==0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}


