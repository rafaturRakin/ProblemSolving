/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 1A
    Date : 24-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m, n, a, square;
    cin >> m >> n >> a;
    if(m%a==0)
        square = m/a;
    else
        square = m/a + 1;

    if(n%a==0)
        square *= n/a;
    else
        square *= (n/a +1);

    cout<< square << "\n";

    return 0;
}
