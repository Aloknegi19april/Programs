#include<bits/stdc++.h>
using namespace std;

void myfunc()
{
    //author    : Alok Negi
    //date      : 2-July
    return;
}

int find_min_Cost(int stations, int a, int b)
{
    int cost = 0;

    if((a*3) > b)
    {
        cost = (stations /3)*b;
        stations = (stations % 3) - 1;
        if(stations > 0)
        {
            cost += stations * a;
        }
    }
    else
    {
        cost = stations * a;
    }

    return cost;
}

int main()
{
    int stations;
    cin >> stations;

    int stn1, stn2;
    cin >> stn1 >> stn2;

    myfunc();

    cout << find_min_Cost(stations, stn1, stn2);
}
