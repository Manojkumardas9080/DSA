#include <bits/stdc++.h>
using namespace std;
// Given n strings, print unique strings in lexiographical order with their frequency
// N < 10^5       |s| <= 100 

int main(){
  map<string, int> m;
  int n;
  cin >>n;
  for(int i=0; i<n; ++i){
      string s; 
      cin>>s;
      m[s]++;
  }

  cout <<"size: "<<m.size() <<endl;
  for(auto pr :m){
    cout<<pr.first <<" "<<pr.second <<endl;
  }


  return 0;

}