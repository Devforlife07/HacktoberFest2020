// Code Contributed by Mihir Gupta
// Problem Link : https://cses.fi/problemset/task/1634/

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
    int c[a];
    for (int i = 0; i < a; i++)
        cin >> c[i];
    int d[a + 1][b + 1];
    for (int i = 0; i < b + 1; i++)
        d[0][i] = 10000007;
    for (int i = 0; i < a + 1; i++)
        d[i][0] = 0;

    for (int i = 1; i < a + 1; i++)
    {
        for (int j = 1; j < b + 1; j++)
        {
            if (c[i - 1] <= j)
            {
                d[i][j] = min(1 + d[i][j - c[i - 1]], d[i - 1][j]);
            }
            else
            {
                d[i][j] = d[i - 1][j];
            }
        }
    }
    if (d[a][b] == 10000007)
        cout << "-1";
    else
        cout << d[a][b];
}