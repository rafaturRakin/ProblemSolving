#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  08-06-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Bob and String]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, len1, len2;
    string first, second;

    cin >> test;

    while(test--)
    {
        cin >> first >> second;
        len1 = first.size();
        len2 = second.size();

        int a[26]={0}, b[26]={0};

        for(int i=0; i<len1; i++)
            a[first[i]-'a']++;
        for(int i=0; i<len2; i++)
            b[second[i]-'a']++;

        int result = 0;
        for(int i=0; i<26; i++)
            result += abs(a[i]-b[i]);

        cout << result << endl;
    }


     return 0;
}
