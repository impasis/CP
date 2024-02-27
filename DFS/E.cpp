#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

#define int long long
using namespace std;

vector <vector <int>> vec(30100);
vector <int> used(30100);
vector <int> ret(30100);

void dfs(int v)
{
	used[v] = 1;

	for (auto el : vec[v]) {
		if (!used[el])
			dfs(el);
	}
}

void solve(int v, int s)
{
	dfs(v);
	if (used[s]) {
		cout << v << endl;
		return;
	}
	solve(ret[v], s);
}

signed main(void)
{

	int n, f, s;
	cin >> n >> f >> s;

	for (int i = 2; i <= n; i++) {
		int x;
		cin >> x;
		vec[x].push_back(i);
		ret[i] = x;
	}
	
	solve(f, s);
}