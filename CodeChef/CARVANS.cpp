#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: CodeChef
    Problem: [Carvans]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, i, cars, num, x, val;

    cin >> test;
    while(test--)
    {
        cin >> num;
        int arr[num];
        for(i=0; i<num; i++)
            cin >> arr[i];

        cars = 1;
        for(i=1; i<num; i++)
        {
            if(arr[i]>arr[i-1])
                arr[i] = arr[i-1];
            else
                ++cars;
        }
        cout << cars << endl;
    }
    return 0;
}



