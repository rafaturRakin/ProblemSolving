#include <bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  12-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Reverse squared sum]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    //code
    fastIO();
    int test, length, number, result;
    bool sign;
    vector <int> vec;

    cin >> test;

    while(test--)
    {
        cin >> length;
        result = 0;
        sign = true;
        for(int i=0; i<length; i++)
        {
            cin >> number;
            vec.push_back(number);
        }

        for(int i=length-1; i>=0; i--)
        {
            if(sign)
            {
                result = result + (vec[i] * vec[i]);
                sign = false;
            }
            else
            {
                result = result - (vec[i] * vec[i]);
                sign = true;
            }
        }

        cout << result << endl;
        vec.clear();
    }
    return 0;
}
