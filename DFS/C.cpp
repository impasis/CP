#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char arr[250][250];

void dfs(int i, int j) 
{
	if (arr[i][j] == 'x') return;

	arr[i][j] = 'x';
	dfs(i - 1, j);
	dfs(i, j - 1);
	dfs(i + 1, j);
	dfs(i, j + 1);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i <= (n + 1); i++) {
        for (int j = 0; j <= (m + 1); j++) {
            if (i == 0 || j == 0 || i == (n + 1) || j == (m + 1))
                arr[i][j] = 'x';
        }
    } 

    int cnt = 0;
    for (int i = 0; i <= (n + 1); i++) {
        for (int j = 0; j <= (m + 1); j++) {
            if (arr[i][j] == '.') {
                dfs(i, j);
                cnt++;
            }
        }
    }

    if (cnt == 1) {
        cout << 7 << endl;
    }

    else if (cnt == 2) {
        cout << 9 << endl;
    }

    else if (cnt == 3) {
        cout << 8 << endl;
    }
}

signed main(void) 
{
    solve();
}