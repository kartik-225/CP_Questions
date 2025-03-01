#include <bits/stdc++.h>

using namespace std;

int solve(int a , int b , int xq , int yq , int xk , int yk){
    set<pair<int,int>> king_coordinates = {{xk + a , yk + b} , {xk - a , yk + b} , {xk + a , yk - b} , {xk - a , yk - b},
                                                                                {xk + b , yk + a} , {xk - b , yk + a} , {xk + b , yk - a} , {xk - b , yk - a}};    
    set<pair<int,int>> queen_coordinates = {{xq + a , yq + b} , {xq - a , yq + b} , {xq + a , yq - b} , {xq - a , yq - b},
                                                             {xq + b , yq + a} , {xq - b , yq + a} , {xq + b , yq - a} , {xq - b , yq - a}};
    
    vector<pair<int,int>> v;
    set_intersection(king_coordinates.begin() , king_coordinates.end() , queen_coordinates.begin() , queen_coordinates.end() , back_inserter(v));

    return v.size();
}

int main(){

    int t ; cin >> t;
    int a , b , xq , yq , xk , yk;
    while(t--){
        cin >> a >> b >> xk >> yk >> xq >> yq;
        cout << solve(a , b , xq , yq , xk , yk) << '\n';
    }

    return 0;
}