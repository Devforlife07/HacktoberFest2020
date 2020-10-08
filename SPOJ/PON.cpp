
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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
//=======================
vi g[N];
int a[N];
//=======================
bool gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}
ll exp(ll a, ll n, ll mod)
{
  ll res = 1;
  // a = a % mod;
  while (n > 0)
  {
    if (n & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    n >>= 1;
  }
  return res % mod;
}

bool isPrime(ll n)
{
  if (n == 1)
    return false;
  for (int i = 0; i < 20; i++)
  {

    ll a = 1 + rand() % (n - 1);

    if (exp(a, n - 1, n) != 1)
      return false;
  }
  return true;
}
void solve()
{
  ll n;
  cin >> n;
  cout << (isPrime(n) ? "YES" : "NO") << endl;
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