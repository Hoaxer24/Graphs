#include<bits/stdc++.h>
using namespace std;
class BFS
{
    public:
            vector<int> bfsgraph(int V,vector<int> adj[])
            {
                    queue<int>q;
                    vector<int>bfs;
                    int vis[V]={};
                    vis[0]=1;
                    q.push(0);
                    while(!q.empty())
                    {
                        int node=q.front();
                        q.pop();
                        bfs.emplace_back(node);
                        for(auto it : adj[node])
                        {
                                if(!vis[it])
                                {
                                        vis[it]=1;
                                        q.push(it);
                                }
                        }
                    }
                    return bfs;
            }
};

                void addEdge(vector <int> adj[], int u, int v) {
                                adj[u].push_back(v);
                                adj[v].push_back(u);
                                }

                void printAns(vector <int> &ans) {
                for (int i = 0; i < ans.size(); i++) {
                        cout << ans[i] << " ";
                          }
                }

                int main()
                {
                        vector <int> adj[6];
                        
                        addEdge(adj, 0, 1);
                        addEdge(adj, 1, 2);
                        addEdge(adj, 1, 3);
                        addEdge(adj, 0, 4);

                        BFS obj;
                        vector <int> ans = obj.bfsgraph(5, adj);
                        printAns(ans);

                        return 0;

                }

