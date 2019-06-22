#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> Ar[i][j];

    int i,a = 0, max = INT_MIN,j,b,flag = 0;
    for(i = 0; i < n; i++)
    {
        a = 0;
        for(j = 0; j < n; j++)
        {
            if(Ar[i][j] == 1)
                {
                    a++;
                    if(a  > max)
                    {
                        max=a;
                        b=i;
                    }
                }
            else
                a=0;
        }

    }

    cout <<b+1;
}
