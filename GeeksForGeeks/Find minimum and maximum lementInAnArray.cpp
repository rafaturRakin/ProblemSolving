#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  20-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Find minimum and maximum element in an array]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

pair<long long, long long> getMinMax(long long arr[], int len)
{
    long long minimum, maximum;
    minimum = maximum = arr[0];

    for(int i=1; i<len; i++)
    {
        if(arr[i] < minimum)
            minimum = arr[i];
        if(arr[i] > maximum)
            maximum = arr[i];
    }


    pair <long long, long long> p(minimum, maximum);
    return p;
}

int main()
{
    fastIO();

    int test, length;

    cin >> test;

    while(test--)
    {
        cin >> length;
        long long arr[length];

        for(int i=0; i<length; i++)
            cin >> arr[i];

        pair<long long, long long> pp = getMinMax(arr, length);
        cout << pp.first << " " << pp.second << endl;
    }

    return 0;
}
