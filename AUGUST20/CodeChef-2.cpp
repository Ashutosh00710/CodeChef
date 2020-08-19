//    --> A/C - Solved 

#include <bits/stdc++.h>
using namespace std;

long solve(vector<long> arr, long val) {
    vector<long> m;
    for(long i = 0; i<arr.size(); i++) { 
        if(arr[i] <= val) { 
            if(val%arr[i]==0) { 
               m.push_back(arr[i]);
            } 
        } else {
            break;
        }       
    }
    if(m.size() > 0) { 
        return *max_element(m.begin(), m.end());
    }
    return -1;
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
        sort(arr.begin(), arr.end());
        ans = solve(arr, K);
        arr.clear();
        cout<<ans<<endl;
    }
    return 0;
}