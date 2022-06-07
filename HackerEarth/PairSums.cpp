#include<bits/stdc++.h>

using namespace std;


/*
    Author: Rakin
    Date:  07-06-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Pair Sums]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int length, number, first, last;
    bool result = false;


    cin >> length >> number;

    int arr[length];

    for(int i=0; i<length; i++)
        cin >> arr[i];

    sort(arr, arr+length);

    first = 0;
    last = length-1;

    while(first<last)
    {
        if(arr[first]+arr[last]==number)
        {
            result = true;
            break;
        }
        else if(arr[first]+arr[last]>number)
            --last;
        else
            ++first;
    }

    if(result)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
