#include<iostream>
using namespace std;

int main()
{
    int n, toprint=1;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= toprint; j++)
        {
            std::cout << "*" ;
        }
        toprint++;
        std::cout << '\n';
    }
}
