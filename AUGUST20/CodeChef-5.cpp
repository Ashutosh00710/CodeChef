#include <bits/stdc++.h>
using namespace std;

int solve(vector<long> arr, long val) {
    
}


int main() {
    long T,N,K,ans,t;
    vector<long> arr;
    cin>>T;
    while(T--) {
        cin>>N;
        cin>>K;
        for(long i =0; i<N; i++) { 
            cin>>t;
            arr.push_back(t);
        }
        ans = solve(arr, K);
        arr.clear();
        cout<<ans<<endl;
    }
    return 0;
}