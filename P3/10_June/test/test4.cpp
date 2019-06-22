/*test 4 */
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = 1;
        int start_col,start_row,flag=0;
        int rno,noofwatches=0,a=1,totalwatches=0;

        while(k!=2*n)
        {
            int odd_sum =0,even_sum =0;
            flag=0;
            noofwatches=0;
            if(k<n)
            {
                start_row = k;
                start_col = 1;
            }
            else
            {
                start_row = n;
                start_col = k-n+1;
            }
            rno = start_col+start_row;
            while(rno)
            {
                int temp=rno%10;
                if(flag == 0)
                {
                    odd_sum+=temp;
                    flag=1;
                }
                else
                {
                    even_sum+=temp;
                    flag=0;
                }
                rno=rno/10;
            }

            noofwatches  = abs(odd_sum-even_sum);
            if(k<=n)
            {
                totalwatches+=(noofwatches*a);

                if(k<n)
                    {
                        a++;
                    }
                else
                    a--;

            }

            else
            {
                totalwatches+=(noofwatches*a);
                a--;
            }
            k++;

        }
        cout << totalwatches <<"\n";

    }
}
