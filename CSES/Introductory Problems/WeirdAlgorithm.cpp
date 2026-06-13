#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    while (n != 1)
    {
        if ((n & 1) == 0)
        {
            cout << n << " ";
            n /= 2;
        }
        else
        {
            cout << n << " ";
            n = (n * 3) + 1;
        }
    }
    cout << 1;
}

int main()
{
    solve();
    return 0;
}