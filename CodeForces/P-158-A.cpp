/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 158 A
    Date : 24-10-2020
*/

#include<bits/stdc++.h>
#define length 50
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i, arr[length], numbers = 0;

    cin >> n >> k;
    for(i=0; i<n; i++)
        cin >> arr[i];

    for(i=0; i<n; i++)
    {
        if(arr[i] != 0 && arr[i] >= arr[k-1])
            ++numbers;
        if(arr[i] < arr[k-1])
            break;
    }

    cout << numbers << "\n";
    return 0;
}

