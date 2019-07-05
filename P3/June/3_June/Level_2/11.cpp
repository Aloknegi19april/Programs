#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, j =1,k=0;
    for(int i = 0; i < n ;i++)
    {
        if(i % 2 != 0)
        {
            a+= 3 *j;
            j+=2;
        }
        else
        {
            a=a+(10*k)+1;
            k++;
        }
    }
    cout << a;
}
