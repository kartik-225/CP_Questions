#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(int n) {
    if(n & 1){
      cout << 4 << '\n';
      cout << 1 << ' ' << n << '\n';
      cout << 1 << ' ' << n-1 << '\n';
      cout << n-1 << ' ' << n << '\n';
      cout << n-1 << ' ' << n << '\n';
    }
    else{
      cout << 2 << '\n';
      cout << 1 << ' ' << n << '\n';
      cout << 1 << ' ' << n << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n , temp;
        cin >> n;
        for (int i = 0; i < n; i++) 
            cin >> temp;

        solve(n);
    }

    return 0;
}