#include<bits/stdc++.h>
using namespace std;
int main(){

  int N;
  cin >>N;
  int revNum = 0;
  while(N > 0){
      int ld = N%10;
      revNum = (revNum*10) + ld;
      N = N/10;

  }
  cout <<revNum  ;


  return 0;
}