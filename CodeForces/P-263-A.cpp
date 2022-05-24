/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 263A
    Date : 26-10-2020
*/

#include<bits/stdc++.h>
#define length 5
using namespace std;
int main()
{
    int matrix[length][length], i, j, result, x;

    for(i=0; i<length; i++)
    {
        for(j=0; j<length; j++)
        {
            cin >> x;
            matrix[i][j] = x;
        }
    }

    for(i=0; i<length; i++)
    {
        for(j=0; j<length; j++)
        {
            if(matrix[i][j] == 1)
            {
                result = abs(2-i) + abs(2-j);
                break;
            }
        }
    }

    cout << result << "\n";
    return 0;
}


