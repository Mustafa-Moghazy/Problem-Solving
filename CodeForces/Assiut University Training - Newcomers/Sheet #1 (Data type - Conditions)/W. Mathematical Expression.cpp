/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, ans;
    char c1, c2;
    cin>>a>>c1>>b>>c2>>ans;
    if(c1 == '+'){
        if(a + b == ans)
            cout<< "Yes";
        else
            cout<< a + b;
    }
    else if(c1 == '-'){
        if(a - b == ans)
            cout<<"Yes";
        else
            cout<<a - b;
    }
    else{
        if( a*b == ans)
            cout<<"Yes";
        else
            cout<< a * b;
    }

    return (0);
}


