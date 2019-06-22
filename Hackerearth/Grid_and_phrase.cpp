#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m, i, j,k,count=0;
    cin >> n >> m;

    char ch[100][100], p[5]="saba";
    for( i = 0; i < n; i++ )
    {
        for (j = 0; j < m ; j++) {
            /* code */
            cin>> ch[i][j];
        }
        k=0;



    }

    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < m; j++ )
        {

            if(ch[i][j]==p[k])
            {

                k++;
            }
            std::cout <<k << '\n';
            if(ch[i][j]!=p[k])
            {
                k=0;
            }
            if(k==4)
            {
                cout<<"matched"<<"\n";
                count++;
            }

        }

    }
    std::cout << count << '\n';
}
