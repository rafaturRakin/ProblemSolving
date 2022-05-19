#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  19-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Missing number]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int missingNumber(int arr[], int num)
{
    int totalSum = (num * (num+1) ) / 2;
    int currentSum = 0;

    for(int i=0; i<num-1; i++)
        currentSum += arr[i];

    return totalSum - currentSum;
}

int main()
{
    fastIO();

    int number;

    cin >> number;
    int numberArray[number+5];

    for(int i=0; i<number-1; i++)
        cin >> numberArray[i];

    cout << missingNumber(numberArray, number) << endl;

    return 0;
}
