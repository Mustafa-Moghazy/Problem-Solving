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
vector<int>v;
int main() { Fast_Code();
    int n, sum = 0;
    cin >> n;
    for(int i=1; i<=n; ++i){
        if(i+sum <= n) {
            v.push_back(i);
            sum+=i;
        }else{
            v.pop_back();
            sum -= i-1;
            v.push_back(n-sum);
            break;
        }
    }
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    return (0);
}
