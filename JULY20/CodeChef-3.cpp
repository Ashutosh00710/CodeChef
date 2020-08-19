//    --> A/C - Solved

#include <bits/stdc++.h>

using namespace std;

void solve(int N) {
  cout << "O";
  for (int i = 1; i < 64; i++) {
    if(i%8==0) cout<<endl;
    if(i<N) cout<<".";
    else cout<<"X";
  }
}

int main() {
  int T,N;
  cin>>T;
  while(T--) {
    cin>>N;
    solve(N);
  }  
  return 0;
}