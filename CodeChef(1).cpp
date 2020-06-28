#include <bits/stdc++.h>

using namespace std;

int solve(int K, vector<int> arr) {
    int chef = 0, gov = 0;
    chef = accumulate(arr.begin(), arr.end(), 0);
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i]>K) {
            gov += K;
        } else {
            gov += arr[i];
        }
    }
    if(gov >= chef) {
        return 0;
    } else {
        return chef - gov;
    }
}

int main() {
    int T,K,N,val;
    vector<int> arr;
    vector<int> result;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        for(int i=0; i<N; i++) {
            cin>>val;
            arr.push_back(val);
        }
        result.push_back(solve(K, arr));
        arr.clear();
    }
    for(int x:result) {
        cout << x << '\n';
    }
    return 0;
}
