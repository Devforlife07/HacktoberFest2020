#include <bits/stdc++.h>
#define MOD 1000000007
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long
#define PL pair<ll, ll>
#define PI pair<int, int>
#define vl vector<ll>
#define endl "\n"
#define vi vector<int>
#define um unordered_map
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define sortall(a) sort(all(a))
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    long int c[a], pre[a];
    long long int preSum = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
        preSum += c[i];
        pre[i] = preSum;
    }
    for (int i = 0; i < b; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
            cout << pre[y - 1] << endl;
        else
            cout << pre[y - 1] - pre[x - 2] << endl;
    }
}