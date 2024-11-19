#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0)->ios_base::sync_with_stdio(false);
	int n, m; cin >> n >> m;

	vector<int> p(n+1);
	vector<int> a(n);
	for (int i=0; i<n; ++i){
		cin >> a[i];
	}

	for (int i=1; i<=n; ++i){
		p[i] = p[i-1]^(2*a[i-1]);
	}

	for (int i=0; i<m; ++i){
		int l, r; cin >> l >> r;
		cout << (p[r]^p[l-1]) << '\n';
	}
}
