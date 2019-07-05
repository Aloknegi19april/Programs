#include<bits/stdc++.h>
using namespace std;

void addedge(vector<pair<int, int> > adj[], int v1, int v2, int wt)
{
    adj[v1].push_back(make_pair(v2,wt));
    adj[v2].push_back(make_pair(v1,wt));
}

void printg(vector<pair<int, int> > adj[], int v)
{
    for(int i = 0; i < v; i++)
    {
        cout << i << " ";
        for(auto x : adj[i])
            cout << "-->" << x.first << " , " << x.second;
        cout << endl;
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<pair<int, int > > adj[V];

    int v1, v2, wt;
    for(int i = 0; i < E; i++)
    {
        cin >> v1 >> v2 >> wt;
        addedge(adj,v1,v2, wt);
    }

    printg(adj, V);
}
