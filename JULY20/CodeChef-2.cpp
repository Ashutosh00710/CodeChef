//    --> A/C - Solved 

#include <bits/stdc++.h>

using namespace std;

int solve(long a, long b) {
  long s1=0, s2=0;
  for (s1 = 0; a > 0; s1 += a % 10, a/=10);
  for (s2 = 0; b > 0; s2 += b % 10, b/=10);
    
  if(s1>s2)  return 0; 
  else if(s1<s2) return 1; 
  else return 2; 
}

int main() {
  long T,N,val1,val2,c=0,m=0;
  cin>>T;
  while(T--) {
    cin>>N;
    for(long i=0; i<N; i++) {
      cin>>val1;
      cin>>val2;
      if(solve(val1, val2)==0) c++;
      if(solve(val1, val2)==1) m++;
      if(solve(val1, val2)==2) { c++; m++; }
    } 
    if(c>m) cout<<"0"<<" "<<c<<endl;
    else if(c<m) cout<<"1"<<" "<<m<<endl;
    else cout<<"2"<<" "<<c<<endl;
    c=0;
    m=0;
  }
  return 0;
}