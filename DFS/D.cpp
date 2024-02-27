#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> vec;
vector<int> used;
int cnt = 0;
int ver = 0;

void dfs(int v, int ans=0) {
    used[v] = 1;
    if (ans > cnt) {
    	cnt = ans;
    	ver = v;
    }

    for (int el : vec[v]) {
        if (!used[el]) {
            dfs(el, ans + 1);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vec.resize(n + 1);
    used.assign(n + 1, 0);

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    dfs(1);
    int node1 = ver, cnt1 = cnt;
    cnt = 0;
    ver = 0;
    used.assign(n + 1, 0);
    dfs(node1);
    cout << cnt << endl;
}

signed main(void) 
{
    solve();
}