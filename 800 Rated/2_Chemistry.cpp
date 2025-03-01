#include <bits/stdc++.h>

using namespace std;

string solve(int n , int k , string &s){
  map<char,int> mpp;
  for(int i = 0 ; i < n ; i++)
    mpp[s[i]]++;

  if(n == 1 && k == 0) return "YES";

  int oddFreq = 0;
  for(auto i : mpp){
    if(i.second % 2 == 1 && k > 0)
      k -= 1;
    else if(k == 0 && i.second % 2 == 1)
      oddFreq++;
    if(oddFreq > 1) return "NO";
  } 

  return "YES";
}

int main(){

  int t ; cin >> t;
  int n , k; string s;
  while(t--){
    cin >> n >> k >> s;
    cout << solve(n,k,s) << '\n';
  }

  return 0;
}