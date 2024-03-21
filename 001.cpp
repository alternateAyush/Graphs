// Note: Total degree (sum of degrees) of a graph = 2*(edges)

// Matrix representation of graph

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;           // n = vertices, m= edges
    int graph[n + 1][n + 1]; // 1 indexing
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            graph[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}