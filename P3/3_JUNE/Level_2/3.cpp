#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int left,  right;
    left =1, right = n * n + 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for(int j = i; j <= n; j++)
        {
            cout << left << "*";
            left++;
        }
        for(int j = i; j <= n; j++)
        {

            cout << right ;
            if(j < n)
                cout <<"*";
            right++;
        }
        right--;
        right-=2 * (n - i);
        cout<<"\n";
    }
}
