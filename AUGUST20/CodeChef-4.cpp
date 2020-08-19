#include <bits/stdc++.h> 
using namespace std; 
  
 void solve(string str1, string str2) 
 {   
     int j;
     string temp = str2; 
     char target;
     for(int i = 1; i<str2.size(); i++) { 
         if(str2[i]>str2[i-1]) { 
             target = str2[0]+1;
             break;
         } else if(str2[i]<str2[i-1]) { 
             target = str2[0];
             break;
         }
     }
     sort(str1.begin(), str1.end());
     sort(str2.begin(), str2.end());
     for(int i = 0, j=0; i<str1.size();) {
         if(str1[i]==str2[j])
         { 
             str1[i] = target;
             i++;
             j++;
         }
         else {
             i++;
         }
     }
     sort(str1.begin(), str1.end());
     for(int i = 0, j=0; i<str1.size();) { 
         if(j>str2.size()-1) { 
             break;
         } else if(str1[i] == target) { 
             str1[i] = temp[j];
             i++;
             j++;
         } else {
             i++;
         }
     }
     cout<<str1<<endl;
 } 

int main() 
{ 
    int T;
    string str1, str2; 
    cin>>T;
    while (T--) {
        cin>>str1;
        cin>>str2;
        solve(str1, str2);
    }
    return 0; 
}