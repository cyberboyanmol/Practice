#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define in insert
#define vll vector<ll>
#define pll pair<ll, ll>
#define all(x) (x).begin(), (x).end()
#define f first
#define s second
#define pr(x) cout << x << endl;
#define pr2(x, y) cout << x << " " << y << endl;
#define pr3(x, y, z) cout << x << " " << y << endl;
#define prv(v)       \
    for (auto x : v) \
        cout << x << " ";
#define ffs fflush(stdout);
#define int ll
#define sz(x) (ll) x.size()
using namespace std;

const ll N = (1e5 + 5);
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ll LOG = 29;
#define PI 3.141592653589793238

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    int arr[n + 1];
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= m)
            c++;
    }
    if (c >= x)
    {

        cout << c << " ";
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] >= m)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << x << " ";
        if (c > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] >= m)
                {
                    arr[i] = -1;
                }
            }
        }

        int z = x - c;
        while (z--)
        {
            int maxindex = 0;
            int max = 0;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                    maxindex = i;
                }
            }
            arr[maxindex] = -1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == -1)
                cout << i << " ";
        }
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}