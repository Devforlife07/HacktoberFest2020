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
char grid[1001][1001];
bool visited[1001][1001];
map<pair<int, int>, pair<pair<int, int>, char>> mp;
bool check(int i, int j, int n, int m)
{
  if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '#')
    return false;
  return true;
}
void bfs(int i, int j, int n, int m)
{
  // cout<<"Called"<<endl;
  int moveX[4] = {-1, 1, 0, 0};
  int moveY[4] = {0, 0, 1, -1};
  char move[4] = {'L', 'R', 'D', 'U'};
  queue<pair<int, int>> q;
  q.push({i, j});
  visited[i][j] = true;
  //   cout<<i<<j<<endl;
  while (!q.empty())
  {
    int currI = q.front().first;
    int currJ = q.front().second;
    q.pop();
    for (int k = 0; k < 4; k++)
    {
      int currX = currI + moveY[k];
      int currY = currJ + moveX[k];
      if (visited[currX][currY] == false && check(currX, currY, n, m))
      {

        mp[make_pair(currX, currY)] = make_pair(make_pair(currI, currJ), move[k]);
        q.push({currX, currY});
        visited[currX][currY] = true;
      }
    }
  }
}
void solve()
{
  int n, m;
  cin >> n >> m;
  int si, sj;
  int ei, ej;
  fo(i, n)
  {
    fo(j, m)
    {
      cin >> grid[i][j];
      if (grid[i][j] == 'A')
      {
        si = i;
        sj = j;
      }
      if (grid[i][j] == 'B')
      {
        ei = i;
        ej = j;
      }
    }
  }
  fo(i, n)
  {
    fo(j, m)
    {
      visited[i][j] = false;
    }
  }
  bfs(si, sj, n, m);
  if (!visited[ei][ej])
    cout << "NO" << endl;
  else
  {
    cout << "YES" << endl;
    vector<char> v;
    pair<int, int> start = {si, sj};
    pair<int, int> end = {ei, ej};
    for (pair<int, int> u = end; u != start; u = mp[u].first)
    {
      // cout<<u.first<<" "<<u.second<<endl;
      v.push_back(mp[u].second);
    }
    reverse(v.begin(), v.end());
    cout << v.size() << endl;
    for (auto x : v)
      cout << x;
    cout << endl;

    // cout<<mp[end].second<<endl;
  }
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  //   cin >> st;

  while (t--)
  {
    solve();
  }

  return 0;
}