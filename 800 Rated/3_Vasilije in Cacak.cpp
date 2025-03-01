#include <bits/stdc++.h>

using namespace std;

string solve(long long int n , long long int k , long long int x){
  long long int startSum = k * (k + 1) / 2;
  long long int endSum = k * (2*n - k + 1) / 2;

  if(x < startSum) return "NO";
  if(x > endSum) return "NO";

  return "YES";
}

int main(){

  int t ; cin >> t;
  long long int n , k , x;
  while(t--){
    cin >> n >> k >> x;
    cout << solve(n,k,x) << '\n';
  }

  return 0;
}