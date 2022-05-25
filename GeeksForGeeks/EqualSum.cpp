#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  25-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Equal Sum]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string solution(int arr[], int n)
{
    int leftSum, rightSum;
    leftSum = rightSum = 0;

    for(int i=0; i<n; i++)
        rightSum += arr[i];

    for(int i=0; i<n; i++)
    {
        rightSum -= arr[i];
        if(leftSum == rightSum)
            return "YES";
        leftSum += arr[i];
    }
    return "NO";
}

int main()
{
    fastIO();

    int test, num;

    cin >> test;

    while(test--)
    {
        cin >> num;

        int arr[num];
        for(int i=0; i<num; i++)
            cin >> arr[i];

        cout << solution(arr, num) << endl;
    }

    return 0;
}

