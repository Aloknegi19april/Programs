#include<bits/stdc++.h>
using namespace std;
int convert(int Ar[], int n)
{
    int term = 1;
    int sum = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(Ar[i] == 1)
            sum+=term;
        term = term *2;
    }
    return sum;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int Ar[n], Br[m];
    for(int i = 0; i < n; i ++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> Br[i];
    }
    int a,b;
    a = convert(Ar,n);
    b = convert(Br,m);

    cout << a - b;

}
