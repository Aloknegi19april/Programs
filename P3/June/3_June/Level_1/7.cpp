#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int toprint=1;
    int a;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                if(j % 2 != 0)
                {
                    std::cout << toprint*(-1);
                }
                else
                {
                  std::cout  << toprint;
                }
            }
            else
            {
              if(j % 2 == 0)
              {
                  std::cout << toprint*(-1);
              }
              else
              {
                cout << toprint;
              }
            }
            toprint++;
        }

        std::cout  << '\n';
    }
}
