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
vi primes;
int a[N];
const int maxN = 90000000;
bool prime[maxN + 1];
//=======================
void sieve()
{
  prime[0] = prime[1] = 1;
  for (int i = 2; i * i <= maxN; i++)
  {
    if (!prime[i])
    {
      for (int j = i * i; j <= maxN; j += i)
      {
        prime[j] = 1;
      }
    }
  }
  for (int i = 0; i <= maxN; i++)
    if (!prime[i])
      primes.PB(i);
}
void solve()
{
  int n;
  cin >> n;
  cout << primes[n - 1] << endl;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  int t = 1;

  cin >> t;
  sieve();
  while (t--)
  {
    solve();
  }

  return 0;
}