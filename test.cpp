/**

**/
#include <bits/stdc++.h>
using namespace std;

#define N 200005
#define maxN 1000000007
#define PI 3.14159265358979
#define bb __builtin_popcount
#define ll long long
long long n, test, a[1001][1001], m;
string s1, s2;
void solve() {
    cin >> s1 >> s2;
    m = s1.size();
    n = s2.size();
    s1 = "0" + s1;
    s2 = "0" + s2;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (s1[i] == s2[j]) a[i][j] = a[i - 1][j - 1] + 1;
                else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
    cout << a[m][n];
}
int main() {
    //freopen("main.in", "r", stdin);
    //freopen("main.in", "w", stdout);
    //freopen("main.out", "w", stdout);
    solve();
    //fclose(stdin);
    //fclose(stdout);
}
///CTKB1997
