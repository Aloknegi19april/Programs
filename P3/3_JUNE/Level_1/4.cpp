#include<iostream>
using namespace std;

int main()
{
  int n, toprint=0;
  cin >> n;

  for(int i = 1; i <= n; i++)
  {
    if(i%2==0)
    {
      toprint--;
        toprint+=i;
    }
    else
    {
      toprint+=i;
    }
      for(int j = 1; j <= i; j++)
      {
          if(i%2==0)
          {
              std::cout << toprint ;
              toprint--;
          }
          else
          {
            std::cout << toprint ;
            toprint++;
          }
      }

      std::cout << '\n';
  }
}
