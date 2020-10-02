// Unique Ways to reach (N , M) from (1 , 1)

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int DP[n][m];

    for (int i = 0; i<m; ++i)
        DP[n-1][i] = 1;
    
    for (int i = 0; i<n; ++i)
        DP[i][m-1] = 1;

    for (int i = n-2; i>=0; --i){
        for (int j = m-2; j>=0; --j) {
            DP[i][j] = DP[i+1][j] + DP[i][j+1];
        }
    }

    cout << DP[0][0];

}
