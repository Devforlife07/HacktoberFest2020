//Code Contributed by Mihir Gupta
//Porblem Link - https://cses.fi/problemset/task/1643/

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
    int n;
    cin >> n;
    long int arr[n], b[n], m = INT_MIN, sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            sum = arr[i];
        else
            sum = max(b[i - 1] + arr[i], arr[i]);
        b[i] = sum;
        if (m < sum)
            m = sum;
    }
    cout << m;
}