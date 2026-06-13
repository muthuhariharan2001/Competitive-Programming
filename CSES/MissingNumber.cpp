#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define v vector

#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    ll form = (n * (n + 1)) / 2;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    cout << form - sum;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}