//Code Contributed by Mihir Gupta
//Problem Link - https://cses.fi/problemset/task/1638/

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
    int a;
    cin >> a;
    int dp[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            char s;
            cin >> s;
            if (s == '*')
                dp[i][j] = -1;
            else
                dp[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (dp[i][j] != -1)
            {
                if (i != 0 && j != 0)
                {
                    if (dp[i - 1][j] != -1)
                        dp[i][j] = ((dp[i][j]) % MOD + (dp[i - 1][j]) % MOD) % MOD;
                    if (dp[i][j - 1] != -1)
                        dp[i][j] = ((dp[i][j]) % MOD + (dp[i][j - 1]) % MOD) % MOD;
                }
                else if (i == 0 && j != 0)
                {
                    if (dp[i][j - 1] != -1)
                        dp[i][j] = ((dp[i][j]) % MOD + (dp[i][j - 1]) % MOD) % MOD;
                }
                else if (j == 0 && i != 0)
                {
                    if (dp[i - 1][j] != -1)
                        dp[i][j] = ((dp[i][j]) % MOD + (dp[i - 1][j]) % MOD) % MOD;
                }
                else
                    dp[i][j] = 1;
            }
        }
    }
    if (dp[a - 1][a - 1] == -1)
        cout << 0;
    else
        cout << dp[a - 1][a - 1] % MOD;
}