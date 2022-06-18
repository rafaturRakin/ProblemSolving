/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 110 A
    Date : 03-11-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    unsigned long long int number, temp, count=0;
    cin >> number;

    while(number != 0)
    {
        temp = number % 10;

        if(temp == 4 || temp == 7)
            ++count;

        number /= 10;
    }

    if(count==4 || count==7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

