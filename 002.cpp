// Adjacency Representation
// Space = O(2*E)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // n = vertices, m=edges
    vector<int> graph[n + 1];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}