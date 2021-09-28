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
int main() { Fast_Code();
    string s; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            int zeros= 0;
            for(int j = i; j < s.size(); ++j)
                if(s[j] == '0') zeros++;
            if(zeros >= 6){
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "no" << endl;

    return (0);
}
