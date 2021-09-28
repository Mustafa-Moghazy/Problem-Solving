/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OO INT_MAX
#define endl '\n'
void Fast_Code(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
}
/// Generate All Beautiful Divisors less than 1e5 ///
/*
 * 1 = 1
 * 110 = 6
 * 11100 = 28
 * 1111000 = 120
 * 111110000 = 496
 * 11111100000 = 2016
 * 1111111000000 = 8128
 * 111111110000000 = 32640
 * 11111111100000000 = 130816
 * */
vector<int>v;
void generate(){
    v.push_back(1);
    v.push_back(6);
    v.push_back(28);
    v.push_back(120);
    v.push_back(496);
    v.push_back(2016);
    v.push_back(8128);
    v.push_back(32640);
    v.push_back(130816);
}
int main() { Fast_Code();
    generate();
    int n, ans = 0;
    cin >>n;
    for(int i=0; i<v.size(); ++i)
        if(n % v[i] == 0) ans = max(ans , v[i]);

    cout << ans << endl;

    return (0);
}
