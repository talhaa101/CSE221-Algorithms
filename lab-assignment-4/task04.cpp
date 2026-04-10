#include <bits/stdc++.h>
using namespace std;

int main()
{

    int nodes, M;
    cin >> nodes >> M;

    vector<int> u(M);
    vector<int> v(M);

    
    for (int i = 0; i < M; i++)
    {
        cin >> u[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> v[i];
    }

    
    vector<int> degree(nodes + 1, 0);


    for (int i = 0; i < M; i++)
    {
        degree[u[i]]++;
        degree[v[i]]++;
    }

    
    int odd = 0;

    for (int i = 1; i <= nodes; i++)
    {
        if (degree[i] % 2 != 0)
        {
            odd++;
        }
    }

    if (odd == 0 || odd == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}