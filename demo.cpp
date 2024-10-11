  #include <bits/stdc++.h>
  using namespace std;

  int count(int n){ // counter funtion
    int cnt = 0;

    while(n>0){
             
      cnt = cnt + 1 ;        //increment the cnt for each digit incountered
      n = n/10;              //remove the last digit

    }
      return cnt;           // return the count of digits
  }

  int main(){
    // count the digit
    int n = 9876;
    cout << "N: "<<n <<endl;

    int digits = count(n);
    cout<<"Number of digits = "<< digits ;
    

    return 0;
  }