#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){

    m[2] = {"mkd"};
    cout <<"size: "<< m.size()<<endl;
    for(auto pr : m){
      cout <<pr.first <<" "<<pr.second<<endl;
    }

}

int main(){
    map<int, string> m;
    m[11] = {"abc"};
    m[50] = {"bcd"};
    m[3] = {"acd"};

    m.insert({4, "afg"});

    print(m);
    cout <<"------------------------"<<endl;

    cout<<"size: "<<m.size()<<endl;
    for(auto &pr :m){
      cout<<pr.first<<" "<<pr.second<<endl;
    }

  
   return 0;
}