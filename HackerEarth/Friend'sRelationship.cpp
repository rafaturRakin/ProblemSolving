#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Friend's Relationship]
*/

int main()
{
    int test, number;

    cin >> test;
    while(test--)
    {
        cin >> number;
        for(int i=1; i<=number; i++)
        {
            for(int j=1; j<=number*2; j++)
            {
                if(j>i && j<=2*number-i)
                    cout << "#";
                else
                    cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
