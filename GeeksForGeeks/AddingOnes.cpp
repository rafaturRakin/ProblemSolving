#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  21-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Adding Ones]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solution(vector<int> &arr, int n, vector<int>& updates, int k)
{
    for(int i=0; i<k; i++)
        arr[updates[i]-1]++;

    for(int i=1; i<=n; i++)
        arr[i] = arr[i-1] + arr[i];
}

int main()
{
    fastIO();
    int test, N, K, num;
    bool hasFound;

    cin >> test;

    while(test--)
    {
        cin >> N >> K;
        vector <int> updates(K, 0);
        vector <int> arr(N, 0);

        for(int i=0; i<K; i++)
            cin >> updates[i];

        solution(arr, N, updates, K);

        for(int i=0; i<N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
