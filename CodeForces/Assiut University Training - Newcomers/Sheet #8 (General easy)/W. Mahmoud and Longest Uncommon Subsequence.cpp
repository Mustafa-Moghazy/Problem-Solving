/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int main(){ fast();
    string s, ss;
    cin>>s>>ss;
    if(s == ss)
        cout << "-1" << endl;
    else
        cout << max(s.length(), ss.length()) <<endl;


    return (0);
}

