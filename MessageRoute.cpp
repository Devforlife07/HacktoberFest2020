/**
 * CODE
 * BY
 * VIKAS VERMA
 * 
 * $$Always Check for Constraints
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define REP(l, r) for (int i = l; i < r; i++)
#define printclock cerr << "Time : " << 1000 * (ld)clock() / (ld)CLOCKS_PER_SEC << "ms\n"
#define jaldi ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g[N];
int a[N];
//=======================
void addEdge(vi adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void bfs(vi adj[], int s, int dest, bool visited[], int parent[])
{
  queue<int> q;
  q.push(s);
  visited[s] = true;
  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    for (int v : adj[u])
    {
      if (visited[v] == false)
      {
        q.push(v);
        parent[v] = u;
        visited[v] = true;
      }
    }
  }
  //   cout<<parent[4]<<endl;

  if (visited[dest] == false)
  {
    cout << "IMPOSSIBLE" << endl;
  }
  else
  {
    vector<int> list;
    for (int start = dest; start != -1; start = parent[start])
    {
      list.push_back(start);
    }
    cout << list.size() << endl;
    reverse(list.begin(), list.end());
    for (int i = 0; i < list.size(); i++)
    {
      cout << list[i] << " ";
    }
    cout << endl;
  }
}
void solve()
{
  int n, m, u, v;
  cin >> n >> m;
  vector<int> adj[n + 1];
  fo(i, m)
  {
    cin >> u >> v;
    addEdge(adj, u, v);
  }
  bool visited[n + 1];
  int parent[n + 1];
  for (int i = 0; i <= n; i++)
    visited[i] = false;
  for (int i = 0; i <= n; i++)
    parent[i] = -1;
  bfs(adj, 1, n, visited, parent);
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  //   cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}