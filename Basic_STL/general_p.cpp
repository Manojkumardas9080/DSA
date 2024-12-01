#include <bits/stdc++.h>
using namespace std;


int main(){

  map<int, int> mp;
  int n;
  cin >>n;

  for(int i=0; i<n; i++){
    int x;
    cin >>x;
    mp[x]++;

  }
  
  for(auto &pr : mp){
    cout << pr.first <<" "<<pr.second << endl;
  }
  auto f = mp.find(1);
  mp.erase(f);
  
cout <<"----------------------"<<endl;
  for(auto &pr : mp){
    cout <<pr.first <<" "<<pr.second<<endl;
  }



  return 0;

}