/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 977A
    Date : 31-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int number, k, x;
    cin >> number >> k;

    while(k!=0)
    {
        x = number%10;
        if(x==0)
        {
            --k;
            number /= 10;
        }
        else
        {
            if(x<k)
            {
                k -= x;
                number -=x;
            }
            else
            {
                number -= k;
                break;
            }
        }
    }
    cout << number << "\n";
    return 0;
}

