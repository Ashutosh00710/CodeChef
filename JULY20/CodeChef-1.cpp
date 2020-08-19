//    --> A/C (1) - Correct   --> W/A (2) - Incorrect  (Partially Solved)

#include <bits/stdc++.h>

using namespace std;

long solve(vector<long> arr) {
    vector<long> res;
    for (long i = 0; i < arr.size() - 1;i++) {
        res.push_back(abs(arr[i + 1] - arr[i]) - 1);
    }
    return accumulate(res.begin(), res.end(), 0);
}

int main() {
    int T,N,val;
    vector<long> arr;
    vector<long> result;
    cin>>T;
    while(T--) {
        cin>>N;
        for(long i=0; i<N; i++) {
            cin>>val;
            arr.push_back(val);
        }
        result.push_back(solve(arr));
        arr.clear();
    }
    for(long x:result) {
        cout << x << '\n';
    }
    return 0;
}