#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  02-06-2022
    Language: C++
    OJ: AtCoder
    Problem: [A - Tiny Arithmetic Sequence]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr+0, arr+3);

    if(arr[2]-arr[1]==arr[1]-arr[0])
        cout << "Yes\n";
    else
        cout << "No\n";

     return 0;
}
