#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <long long> arr(n);

    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int k;
    cin >> k;

    vector <pair<long long, long long>> stock(n);
    pair<long long, long long> p;

    for(long long i = 0; i < n; i++)
    {
        p = make_pair(arr[i], i+1);
        stock[i] = p;
    }

    sort(stock.begin(), stock.end());

    long long i = 0, total_stock = 0;
    while(i < n)
    {
        if(stock[i].first * stock[i].second > k)
            break;

        k = k - (stock[i].first * stock[i].second);
        total_stock += stock[i].second;

        i++;
    }
    long long rem;
    if(i < n)
    {
        rem = k/stock[i].first;
    }

    cout << total_stock + rem;

}
