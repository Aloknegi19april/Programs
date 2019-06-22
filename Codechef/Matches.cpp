#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        int flag = 0;
        cin >> N >> M;
        while (N != 0 || M != 0)
        {
            if(flag == 0)
            {
                flag = 1;
            }
            else
            {
                flag =0;
            }
            if(N > M)
            {
                N=N%M;
            }
            else
            {
                M=M%N;
            }
            if(N==0 || M==0)
            {
                break;
            }
        }
        if(flag == 1)
        {
            std::cout << "Ari" << '\n';

        }
        else
        {
            std::cout << "Rich" << '\n';

        }
    }

}
