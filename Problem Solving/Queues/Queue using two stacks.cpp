#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class questack{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    void pop(){
        if(s1.empty()&& s2.empty()){
            return;
            
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
                
            }
        }
        int topval=s2.top();
        s2.pop();
      
    }
    int tope(){
      if(s1.empty()&& s2.empty()){
          return -1;
      }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
                
            }
        }
        int topval=s2.top();
       
        return topval;
     
    }

};
int main() {
    int q;
    cin>>q;
    int n;
    questack que;
    for(int i=0;i<q;i++){
        int query;
        cin>>query;
        if(query==1){
            cin>>n;
            que.push(n);
            
        }
        else if(query==2){
            que.pop();
        }
        else{
            int topval=que.tope();
          cout<<topval<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
