#include<iostream>
using namespace std;

int main()
{
  int n, toprint=0;
  cin >> n;

  for(int i = 1; i <= n; i++)
  {
      for(int j = 1; j <= i; j++)
      {
          std::cout << toprint ;
          if(toprint==0)
          {
            toprint=1;
          }
          else
          {
            toprint=0;
          }
      }

      std::cout << '\n';
  }
}
