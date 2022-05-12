#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  12-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Marut and Strings]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
	int test, length, small, capital;
	string input;

	cin >> test;

	if(test<1 || test>10)
    {
        cout << "Invalid Test\n";
        test = 0;
    }

	while(test--)
	{
		cin >> input;
		length = input.size();
		small = capital = 0;
		if(length<1 || length>100)
			cout << "Invalid Input\n";
		else
		{
			for(int i=0; i<length; i++)
			{
				if(input[i]>='A' && input[i]<='Z')
					++capital;
				else if(input[i]>='a' && input[i]<='z')
					++small;
			}

			if(small || capital)
				cout << (small<capital ? small : capital) << endl;
			else
				cout << "Invalid Input\n";
		}
	}
	return 0;
}
