#include <bits/stdc++.h>

using namespace std;




bool BFS(vector<int> adj[], int src, int dest, int v, 
                            int pred[], int dist[]) 
{ 
   
    list<int> queue; 
  
    
    bool visited[v]; 
  
  
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
  
    // now source is first to be visited and 
    // distance from source to itself should be 0 
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    // standard BFS algorithm 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
  
                // We stop BFS when we find 
                // destination. 
                if (adj[u][i] == dest) 
                   return true; 
            } 
        } 
    } 
  
    return false; 
} 
  
// utility function to print the shortest distance  
// between source vertex and destination vertex 
vector<int> printShortestDistance(vector<int> adj[], int s,  
                                    int dest, int v) 
{ 
    // predecessor[i] array stores predecessor of 
    // i and distance array stores distance of i 
    // from s 
    int pred[v], dist[v]; 
  
    bool res = BFS(adj, s, dest, v, pred, dist);
   
  
    // vector path stores the shortest path 
    vector<int> path; 
    int crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
  
    return path;
} 


void add_edge(vector<int> adj[], int src, int dest) 
{ 
    //connect both points
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        

        vector<int> adj[n+1]; // array of vectors(connected points)

        int start,end;
        for (int i = 1; i <= n-1; ++i)
        {
            cin>>start>>end;
            
            add_edge(adj,start,end);
        }

        vector<int> a;
        
        for (int i = 0; i < k; ++i)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);

        }

         vector<int> b;
        for (int i = 0; i < l; ++i)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }

        vector<int> actual_a;
        for (int i = 1; i < k; ++i)
        {
            actual_a.push_back(a[i-1]);

           vector<int> path = printShortestDistance(adj,a[i-1],a[i],n+1);
           //p_vec(path);

           for (int i = path.size()-2; i > 0; i--)
           {
                actual_a.push_back(path[i]);
           }
        }

        actual_a.push_back(a[a.size()-1]);

       

       vector<int> actual_b;
        for (int i = 1; i < l; ++i)
        {
            actual_b.push_back(b[i-1]);

           vector<int> path = printShortestDistance(adj,b[i-1],b[i],n+1);
           //p_vec(path);

           for (int i = path.size()-2; i > 0; i--)
           {
                actual_b.push_back(path[i]);
           }
        }

        actual_b.push_back(b[b.size()-1]);

        int count=0;
        for (int i = 0; i < min(actual_a.size(),actual_b.size()); ++i)
        {
            if(actual_a[i]==actual_b[i])count++;
        }

        cout<<count<<endl;
       


    }

    return 0;
}