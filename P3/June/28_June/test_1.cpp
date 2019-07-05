
#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b==0)
        return 1;
    return a * power(a,b-1)%1000000007;

}
int Ar[100000000];
int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;


    Ar[0] = 0;
    Ar[1] = 1;
    for(int i = 2; i < 100000000; i++)
    {
        Ar[i] = Ar[i-1]+Ar[i-2];
    }

    while(q--)
    {
        int sum = 0;
        int L, R;
        cin >> L >> R;
      long long a = power(Ar[L],n);
      long long b = power(Ar[R],n);
      cout <<abs(b-a) << endl;
    }
    return 0;
}
