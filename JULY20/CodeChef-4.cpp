//    --> A/C - Solved

#include <bits/stdc++.h>

using namespace std;

void find(vector<long long> x) {
    int c = 0;
    for (long i = 0; i < x.size()-1; i+=2) {
        if(x[i]!=x[i+1]) { 
            cout<<x[i];
            c++;
            break;
        }
    }
    if(c==0) cout<<x[x.size()-1];
}

int main() {
    int T;
    long long N,val1,val2;
    vector<long long> x;
    vector<long long> y;
    cin>>T;
    while(T--) {
        cin>>N;
        for(long i=0; i<((4*N)-1); i++) {
            cin>>val1;
            cin>>val2;
            x.push_back(val1);
            y.push_back(val2);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        find(x);
        cout<<" ";
        find(y);
        cout<<endl;
        x.clear();
        y.clear();
    }
    return 0;
}