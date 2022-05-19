#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  19-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Sum of Array Elements]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int sumElement(int arr[], int num)
{
    int totalSum = 0;
    for(int i=0; i<num; i++)
        totalSum += arr[i];

    return totalSum;
}

int main()
{
    fastIO();

    int number;

    cin >> number;
    int numberArray[number+5];

    for(int i=0; i<number; i++)
        cin >> numberArray[i];

    cout << sumElement(numberArray, number) << endl;

    return 0;
}

