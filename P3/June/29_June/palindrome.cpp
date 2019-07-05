#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int no_of_bits = sizeof(int) * 8;

    int start = 0;
    int end = no_of_bits-1;
    int flag = 0;
    while(start < end)
    {
        if((n&1<<start)^(n&1<<end))
        {
            flag = 1;
            break;
        }
        start--;
        end--;
    }

    if(flag == 1)
        cout << "Not Palindrome";
    else
        cout << "Palindrome";
}
