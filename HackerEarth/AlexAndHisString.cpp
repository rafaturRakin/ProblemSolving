#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  09-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Alex and his String]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    string input, output;
    int k, length, indx;
    char ch;

    cin >> input >> k;

    length = input.size();

    for(int i=0; i<length; i++)
    {
        ch = 'z';
        indx = i;
        for(int j=i; j<length && j<i+k; j++)
        {
            if(input[j]<=ch)
            {
                indx = j;
                ch = input[j];
            }
        }
        output.push_back(ch);
        ch = input[i];
        input[i] = input[indx];
        input[indx] = ch;
    }

    cout << output << "\n";

    return 0;
}
