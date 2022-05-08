#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  08-05-2022
    Language: C++
    OJ: SPOJ
    Problem: [INTEST - Enormous Input Test]
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test, value, number, count = 0;

    cin >> test >> value;
    while(test--)
    {
        cin >> number;
        if(number%value == 0)
            ++count;
    }
    cout << count << "\n";
    return 0;
}
