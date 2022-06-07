#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  07-06-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Xsquare And Double Strings]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test, length;
    string input;
    bool result;

    cin >> test;

    while(test--)
    {
        cin >> input;

        length = input.size();

        int arr[26]={0};
        for(int i=0; i<length; i++)
            arr[input[i]-'a']++;

        result = true;
        for(int i=0; i<26; i++)
        {
            if(arr[i] >= 2)
            {
                cout << "Yes\n";
                result = false;
                break;
            }
        }
        if(result)
            cout << "No\n";
    }

    return 0;
}
