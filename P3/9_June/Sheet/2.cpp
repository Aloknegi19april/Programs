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

    int a = 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(Ar[i][j] == a)
                a++;
        }

    int sr[n] = {0}, sc[n] = {0}, sd1 = 0, sd2 = 0;
    if(a == n*n-1)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                {
                    sd1+=Ar[i][j];
                }
                if(j == n-i-1)
                {
                    sd2+=Ar[i][j];
                }
                sr[i]+=Ar[i][j];
                sc[j]+=Ar[i][j];
            }
        }
        int i = 0;
            if(sr[i]==sr[i+1]&&sr[i+1]==sr[i+2] && sr[i]==sc[i])
            {
                if(sc[i]==sc[i+1]&&sc[i+1]==sc[i+2] && sc[i]==sd1)
                {
                    if(sd1 == sd2)
                        cout << "Magic Matrix";
                    else
                        cout << "Not a Magic Matrix";
                }

                else
                    cout << "Not a Magic Matrix";
            }
            else
                cout << "Not a Magic Matrix";

    }
    else
        cout << "Not a Magic Matrix";
}
