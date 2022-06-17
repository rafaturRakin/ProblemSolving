
/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 791A
    Date : 29-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int number, i, a, b, max = -1, current = 0;

    cin >> number;
    for(i=1; i<=number; i++)
    {
        cin >> a >> b;
        current = current - a + b;
        if(current>max)
            max = current;
    }

    cout << max << endl;
    return 0;
}


