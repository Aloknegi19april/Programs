#include<bits/stdc++.h>
using namespace std;

int freqOfDigit(int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    freqOfDigit(n);
}

int freqOfDigit(int x)
{
    int i,j,Count[10];
    while(x>0)
    {
        int a=x%10;
        switch(a)
        {

            case 1: Count[1]++;

                break;

            case 2: Count[2]++;

                break;

            case 3: Count[3]++;

                break;

            case 4: Count[4]++;

                break;

            case 5: Count[5]++;

                break;

            case 6: Count[6]++;

                break;

            case 7: Count[7]++;

                break;

            case 8: Count[8]++;

                break;

            case 9: Count[9]++;

                break;
            case 0: Count[0]++;

                break;


        }
        x=x/10;
    }

    for( i = 0; i < 10; i++)
    {
        if(Count[i]!=0)
        {
            cout<< i <<" " << Count[i]<<"\n";
        }
        else
        {
            std::cout << " " << '\n';
        }
    }
}
