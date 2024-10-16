#include <bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin>>N;
    int cnt = 0;
  while(N>0){
        int rem = N%10;
        cnt++;
        N /= 10;

    }
    cout <<"Total digits :" <<cnt;


  return 0;

}
