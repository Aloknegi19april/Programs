#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while( t-- )
  {
    int g, p;
    cin >> g >> p;
    int cost,max,min;
    if (g > p)
    {
      max = g;
      min = p;
    }
    else
    {
      max = p;
      min = g;
    }
    int n;
    cin >> n;
    int q1 = 0, q2 = 0;
    int Ar[n][2];
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < 2; j++)
      {
        cin >> Ar[i][j];
        if( j == 0 && Ar[i][j]==1)
        {
          q1++;
        }
        if( j == 1 && Ar[i][j]==1)
        {
          q2++;
        }
      }
    }

    if(q1 < q2)
    {
      cost = (q1 * max) + (q2 * min);
    }
    else
    {
      cost = (q2 * max) + (q1 * min);
    }
    std::cout << cost << '\n';
  }
}
