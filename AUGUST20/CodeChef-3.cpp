//    --> A/C - Solved 

#include <bits/stdc++.h>
using namespace std;

void solve(long C, long R) {
    double c=0,r=0;
    if(C%9 == 0) { 
        c=C/9;
    } else { 
        c= ceill(C/9)+1;
    }
    if(R%9 == 0) { 
        r=R/9;
    } else { 
        r= ceill(R/9)+1;
    }
    if (c>=r) cout<<"1"<<" "<<r<<endl;
    if (c<r) cout<<"0"<<" "<<c<<endl;
}

int main() {
    long T, C, R;
    cin>>T;
    while(T--) { 
        cin>>C>>R;
        solve(C, R);
    }
    return 0;
}
