#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){  // 
  cout <<"size = "<<v.size()<<endl;

  for(int i=0; i<v.size();  ++i){
    cout<<v[i] <<" ";

  }
  cout<<endl;

}
int main(){

    int N;
    cin >>N;              //total no of vectors
    vector<int> v[N];

    for(int i=0; i<N; ++i){
        int n;
        cin>>n;   // each vector how many elements shoild taken
        for(int j=0; j<n; ++j){
          int x;
          cin >>x;
          v[i].push_back(x);
        }

    }
    for(int i =0; i<N; ++i){   // calling one by one each vector
      printVec(v[i]);

    }


  return 0;
}