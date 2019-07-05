/*
X^y > Y^x
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int X[n], Y[n], count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> Y[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(pow(X[i], Y[j]) > pow(Y[j],X[i]) )
                count++;
        }
    }
    cout << count;
}
