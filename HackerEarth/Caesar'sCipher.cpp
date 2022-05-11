#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  11-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Caesar's Cipher]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test, length, shift, diff;
    string plain, encrypt;

    cin >> test;

    while(test--)
    {
        cin >> plain >> encrypt;
        length = plain.size();

        diff = (abs(plain[0]-'A' - encrypt[0]-'A')+26)%26;
        shift = diff;
        for(int i=0; i<length; i++)
        {
            diff = (abs(plain[i]-'A' - encrypt[i]-'A')+26)%26;
            if(diff!=shift)
            {
                shift = -1;
                break;
            }
        }
        cout << shift << endl;
    }

    return 0;
}
