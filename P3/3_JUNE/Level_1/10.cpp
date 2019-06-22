#include<iostream>
using namespace std;

int main()
{
    int n, toprint=1;
    cin >> n;
    int nspace = n-1;
    for(int i = 1; i <= n; i++)
    {
      for(int k = 1; k <= nspace; k++)
      {
        std::cout << " ";
      }
        for(int j = 1; j <= toprint; j++)
        {
            std::cout << "*" ;
        }
        toprint+=2;
        nspace--;
        std::cout << '\n';
    }
    toprint-=2;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << " " ;
        }
        for(int k = 1; k <= toprint-2; k++)
        {
          cout << "*";
        }
        toprint-=2;
        std::cout  << '\n';
    }
}
