#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Too lazy to name the question]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    fastIO();

    int a, b, c, lcm, steps, number, num;

    cin >> a >> b >> c;


    num = min(a, b);
    while(c)
    {
        if(num%a==0 || num%b==0)
        {
            number = num;
            --c;
        }
        ++num;
    }

    lcm = (a * b) / gcd(a, b);

    if(number%a==0 && number%b==0)
        steps = lcm;
    else if(number%a==0)
        steps = a;
    else
        steps = b;

    for(int i=number; i>=0; i-=steps)
        cout << i << " ";

    cout << endl;

    return 0;
}

