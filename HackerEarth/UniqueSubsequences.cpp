#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  07-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Unique subsequences]
*/


int main()
{
    int maxSize, test, length;
    char lastChar = 'A';
    string input;

    cin >> test;

    while(test--)
    {
        cin >> length >> input;
        maxSize = 0;
        lastChar = 'A';
        for(int i=0; i<length; i++)
        {
            if(input[i] != lastChar)
            {
                ++maxSize;
                lastChar = input[i];
            }
        }

        cout << maxSize << endl;
    }
	return 0;
}

