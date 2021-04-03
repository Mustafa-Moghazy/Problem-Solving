/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, s, c = 0;
    cin>>k>>s;
    for( int x = 0; x <= k; x++)
        for( int y = 0; y <= k; y++ ){
            int z = s - (x+y);
            if( z >= 0 && z<=k)
                    c++;
        }
    cout<< c << endl;
    /**************************
     Note==> if x+y+z = s
             so z = s - ( x + y)

        if( (s - (x+y) >= 0) && (s - (x+y) >= 0)  )
            c++;
    ****************************/

    return (0);
}
