#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  14-06-2022
    Language: C++
    OJ: GeeksForGeeks
    Problem: [Find missing in second array]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

class Solution
{
public:
    vector<long long> findMissing(long long A[], long long B[], int N, int M)
    {
        map <long, long> mp;
        vector<long long> vec;
        for(int i=0; i<M; i++)
            mp[B[i]] = -1;

        for(int i=0; i<N; i++)
        {
            if(mp[A[i]] != -1)
                vec.push_back(A[i]);
        }

        return vec;
    }
};

int main()
{
    fastIO();

    int t;

    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;

        long long a[n];
        long long b[m];

        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int i=0; i<m; i++)
            cin >> b[i];

        vector<long long> ans;

        Solution ob;
        ans = ob.findMissing(a, b, n, m);
        for(int i=0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}
