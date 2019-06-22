#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a>>b;
    int Ar[n],Br[a][b];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int k = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            Br[i][j] = Ar[k];
            k++;
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << Br[i][j] << " ";
        }
        std::cout << '\n';
    }
}
