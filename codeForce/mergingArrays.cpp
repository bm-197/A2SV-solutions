#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> v1(n), v2(m);

	for (int i = 0; i < n; ++i) {
		cin >> v1[i];
	}

	for (int i = 0; i < m; ++i) {
		cin >> v2[i];
	}

	int i = 0, j = 0, k =0;
	vector<int> merged(n + m);

	while (i < n && j < m) {
		if (v1[i] <= v2[j]) {
			merged[k] = v1[i];
			i++;
		}
		else {
			merged[k] = v2[j];
			j++;
		}
		k++;
	}
	while (i < n) {
		merged[k] = v1[i];
		k++, i++;
	}
	while (j < m) {
		merged[k] = v2[j];
		k++, j++;
	}

	for (int m: merged) cout << m << " ";
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t = 1;

	// cin >> t;

	while (t--) solve();
}