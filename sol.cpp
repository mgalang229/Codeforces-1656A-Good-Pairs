#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int mn=*min_element(a, a+n);
	int mx=*max_element(a, a+n);
	int x=-1, y=-1;
	for(int i=0; i<n; ++i) {
		if(a[i]==mn)
			x=i+1;
		if(a[i]==mx)
			y=i+1;
	}
	cout << x << " " << y << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
