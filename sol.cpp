#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int l, b;
		cin >> l >> b;
		int lc = 0, bc = 0, c = 1;
		string winner = "";
		while (true) {
			if (c % 2 == 1) {
				lc += c;
				if (lc > l) {
					winner = "Bob";
					break;
				}
			} else {
				bc += c;
				if (bc > b) {
					winner = "Limak";
					break;
				}
			}
			c += 1;
		}
		cout << winner << '\n';
	}
	return 0;
}
