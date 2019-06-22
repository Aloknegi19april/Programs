#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int toprint=1;
    int a;
    for(int i = 1; i <= n; i++)
    {
        toprint=toprint+i;

        for(int j = 1; j <= i; j++)
        {
            std::cout << toprint-j;

        }

        std::cout  << '\n';
    }
}
