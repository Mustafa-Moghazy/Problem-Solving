/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[25], s2[25];
    cin>> s1 >> s2 ;
    int ans = strcmp(s1, s2);
    if( ans == -1 ){
        cout<<s1;
    }
    else{
        cout<<s2;
    }

    return (0);
}
