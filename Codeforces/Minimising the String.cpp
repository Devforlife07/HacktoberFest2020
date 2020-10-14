#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define MAX 1000000
#define mod 1000000007
#define ll long long int
#define ld long double
#define ull unsigned long long
#define li long int
#define str string
#define fr(i,n) for(ll i = 0; i<n; i++)
#define frj(j,i,n) for(ll j = i; j<n; j++)
#define frev(i,n) for(ll i = n-1; i>=0; i--)
#define all(x) x.begin(),x.end()
#define debug(x) cout << #x << " " << x << endl;
#define println(x) cout << x << "\n";
#define print(x) cout << x << " ";
#define printCase(x) cout << "Case #" << x << ": ";
#define umax(a, b) a=max(a,b);

void solve() {
    
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int pos = -1;
    fr (i, n) {
        if (i == n-1)
            pos = i;
        else if (s[i] > s[i+1]){
            pos = i;
            break;
        }
    }
 
    cout << s.substr(0, pos) << s.substr(pos+1, n-pos-1);
 
}   
 
int main() {
    
    fastio;

    
    int t(1);
    // cin >> t;
 
    frj(i, 1, t+1) {
        // printCase(i);
        solve();
    }
    
    return 0;
    
}
