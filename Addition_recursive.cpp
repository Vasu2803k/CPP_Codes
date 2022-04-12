#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

#define endl '\n'
#define int long long int
int rec_func(int H3[], int n, int i)
{

    if (n < 0)
    {
        return 0;
    }
    else
    {
        return H3[i] + rec_func(H3, n - 1, i + 1);
    }
}
void solve()
{
    int n;
    cin >> n;
    int H1[n], H2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> H1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> H2[i];
    }
    int H3[n];
    for (int i = 0; i < n; i++)
    {
        H3[i] = H1[i] + H2[i];
        cout << H3[i] << endl;
    }
    int i = 0;
    cout << rec_func(H3, n - 1, i) << endl;
}
signed main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
