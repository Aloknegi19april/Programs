#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, count=0;
    for( i = 3; i <= 1000; i++ )
    {
        if( i % 3 == 0 && i % 5 == 0)
        {
            count++;
            std::cout << i << ' ';
        }

    }
    std::cout <<"\n"<< count << '\n';
}
