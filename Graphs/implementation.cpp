#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes;
    cout << "Enter the number of nodes" << endl;
    cin >> nodes;

    int edges;
    cout << "Enter the number of edges" << endl;
    cin >> edges;

    vector<vector<int>> graph(nodes, vector<int>(nodes, 0));

    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cout << "Enter the value of u: ";
        cin >> u;

        cout << "Enter the value of v: ";
        cin >> v;

        if(u >= nodes || v >= nodes || u < 0 || v < 0)
        {
            cout << "Enter valid values between 0 and " << nodes - 1 << endl;
            i--;
            continue;
        }

        graph[u][v] = 1;
    }

    cout << "Adjacency Matrix:" << endl;
    for(int i = 0; i < nodes; i++)
    {
        for(int j = 0; j < nodes; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
