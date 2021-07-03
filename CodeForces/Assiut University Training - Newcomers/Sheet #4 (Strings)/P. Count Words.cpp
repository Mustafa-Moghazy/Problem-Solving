/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0;
    string s;
    while( cin >> s ){
        bool f = true;
        for(int i=0; i<s.size(); i++)
            if( isalpha(s[i]) )
                f = true;

        if(f)
            ans++;
    }

    cout << ans << endl;


    return (0);
}
