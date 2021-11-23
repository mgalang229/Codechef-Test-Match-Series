#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 5;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// simply compare the no. of wins
		int india = count(a.begin(), a.end(), 1);
		int england = count(a.begin(), a.end(), 2);
		string ans = "DRAW";
		if (india > england) {
			ans = "INDIA";
		} else if (england > india) {
			ans = "ENGLAND";
		}
		cout << ans << '\n';
	}
	return 0;
}
