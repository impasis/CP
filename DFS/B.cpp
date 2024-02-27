#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 100100;

int n;
int a[MAXN], b[MAXN];
vector <int> E[MAXN];
vector <int> col(MAXN, -1);

void dfs(int u, int c) {
  col[u] = c;
  for (int el : E[u]) {
    if (col[el] == -1) {
      int n_col = 1 - c;
      dfs(el, n_col);
    }
  }
}

void solve()
{
  cin >> n;
  for (int i = 0; i < (n - 1); i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    E[a[i]].push_back(b[i]);
    E[b[i]].push_back(a[i]);
  }

  dfs(0, 0);

  for (int i = 0; i < (n - 1); i++)
    cout << col[a[i]] << endl;
}

signed main(void) 
{
  solve();
}