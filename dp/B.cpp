#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll ans[n + 4];
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 4;

    for (int i = 4; i <= n; i++)
        ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];

    cout << ans[n];
    return 0;
}