//    --> A/C - Solved 
#include <bits/stdc++.h>

using namespace std;

int solve(int H, int P) {
    while(H>0 && P>0) { 
        H = H-P;
        P = P/2;
    }
    if (H>0) return 0;
    return 1;
}

int main() {
    std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int T,H,P,ans;
    cin>>T;
    while(T--) {
        cin>>H;
        cin>>P;
        ans = solve(H, P);
        cout<<ans<<" "<<endl;
    }
    return 0;
}

