#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int no_of_bits = sizeof(int)*8;
    int count = 0;
    for(int i = 0; i < no_of_bits; i++)
        if(n&1<<i)
            count++;

    if(count == 1)
        cout << "Yes";
    else
        cout << "No";
}
