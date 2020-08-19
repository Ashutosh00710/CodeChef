#include <bits/stdc++.h>

using namespace std;

int main() {
    int T,count=0,r=0;
    cin>>T; 
    vector<int> res;
    while(T--) {
      string val;
        cin>> val;
        for (int i = 0; i < val.length()-1; i++) {
            if(abs(int(val[i])-int(val[i+1]))==1) {
                count++;
                i++;
            }
        }
        res.push_back(count);
        r++; 
        count = 0;
    }
    for(int x:res) {
        cout << x << '\n';
    }
    return 0;
}