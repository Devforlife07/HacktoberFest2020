#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 1; i <= n; i++)
#define Fo(i, k, n) for (i = k; k < n; i++)

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
const int M = 51;
//=======================
// vi g[N];
ll a[M][M], I[M][M];
void mul(ll mat1[][M], ll mat2[][M], int dim)
{
  ll aux[dim + 1][dim + 1];
  fo(i, dim)
  {
    fo(j, dim)
    {
      aux[i][j] = 0;
      fo(k, dim)
      {
        ll res = (mat1[i][k] * mat2[k][j]) % MOD;
        aux[i][j] = (aux[i][j] + res) % MOD;
      }
    }
  }
  fo(i, dim)
      fo(j, dim)
          mat1[i][j] = aux[i][j];
}
void power(int dim, int n)
{
  fo(i, dim) fo(j, dim) cin >> a[i][j];
  fo(i, dim) fo(j, dim)
  {
    if (i == j)
      I[i][j] = 1;
    else
      I[i][j] = 0;
  }
  while (n > 0)
  {
    if (n & 1)
      mul(I, a, dim);
    mul(a, a, dim);
    n >>= 1;
  }
  fo(i, dim)
  {
    fo(j, dim)
    {
      cout << I[i][j] << " ";
    }
    cout << endl;
  }
}
//=======================
void solve()
{
  int n, dim;
  cin >> dim >> n;
  power(dim, n);
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}