#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

#define int long long

using namespace std;

bool dfs(int v, int c, vector <int>& used, vector <vector <int>> vec)
{
	if (used[v]) 
		return used[v] == c;
	used[v] = c;
	bool ans = -1;

	for (auto& el : vec[v]) {
		ans = dfs(el, 3 - c, used, vec) && ans;
	}

	return ans;
}

void solve()
{
	int n, k;
	cin >> n >> k;
	vector <int> used(n + 1, 0);
	vector <vector <int>> vec(n + 1);

	for (int i = 0; i < k; i++) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		if (used[i] == 0) {
			if (!dfs(i, 1, used, vec)) {
				cout << 0 << endl;
				return;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (used[i] == 1)
			cout << i << " ";
	}

	cout << endl;

	for (int i = 1; i <= n; i++) {
		if (used[i] == 2)
			cout << i << " ";
	}

	cout << endl;
}

signed main(void)
{
	solve();
}