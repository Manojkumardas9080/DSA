#include <bits/stdc++.h>

using namespace std;
int main(){
  

  int n;
  cin>>n;
  unordered_map<string, int> m;

  for(int i=0; i<n; ++i){
    string s;
    cin >>s;
    m[s]++;   
  }
  
  int q;
  cin >>q;
  while(q--){    //this loop runs q itmes, each time decrements 1 each iteration, continue utill reaches zero 
    string s;   
    cin >>s;
    cout<<m[s] <<endl; // This line looks up the string s in the unordered map m and prints its associated count. 
                      //If s does not exist in m, it will default to 0 (since the map returns 0 for keys that are not found).
  }

return 0;
}