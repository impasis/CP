#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

#define int short
using namespace std;

vector<int> vec[5100];
int used[5100], pr[5100], isc;

void dfs(int v, int p = -1)
{
	if (used[v] == 2 || isc != -1) {
		return;
	}
	pr[v] = p;
	if (used[v]) {
		isc = v;
		return;
	}

	used[v] = 1;

	for (int el : vec[v]) {
		dfs(el, v);
	}

	used[v] = 2;
}

signed main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		string st;
		cin >> st;
		for (int j = i + 1; j <= n; j++) {
			if (st[j - (i + 1)] == 'B') {
				vec[i].push_back(j);
			}

			else {
				vec[j].push_back(i);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		isc = -1;
		dfs(i);

		if (isc != -1) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}