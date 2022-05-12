#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  12-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Mirror of Mahatma Gandhi]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool solve(string input)
{
    int length = input.size();
    for(int i=0; i<length; i++)
    {
        if(input[i]!='0' && input[i]!='1' && input[i]!='8')
            return false;
    }

    for(int i=0, j=length-1; i<j; i++, j--)
    {
        if(input[i]!=input[j])
            return false;
    }

    return true;
}

int main()
{
	fastIO();

	int test;
	string input;

	cin >> test;

	while(test--)
	{
	    cin >> input;
	    cout << (solve(input) ? "YES\n" : "NO\n");
	}

	return 0;
}

