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
            std::cout << "*" ;
            for(int j = 1; j <= toprint-2; j++)
            {
                std::cout << " " ;
            }
            if(i > 1)
              std::cout << "*" ;
              toprint+=2;
              nspace--;
              std::cout << '\n';
      }
      toprint-=4;
     for(int i = 1; i <= n-1; i++)
    {
        for(int m = 1; m <= i; m++)
        {
          std::cout << " ";
        }

          std::cout << "*" ;
        for(int l = 1; l <= toprint-2; l++)
        {
            std::cout << " " ;
        }
        if(i < n-1)
          std::cout << "*" ;

        toprint-=2;

        std::cout << '\n';
    }
}
