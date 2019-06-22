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
}
