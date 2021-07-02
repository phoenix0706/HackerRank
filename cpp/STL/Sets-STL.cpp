#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include<sstream>
using namespace std;


int main() {
    long q,x;
    int type;
    cin>>q;
    
    
   
    set<long>s;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>x;
            s.insert(x);
        }
        else if(type==2){
            cin>>x;
            s.erase(x);
        }
        else{
            cin>>x;
            cout<<(s.find(x)!=s.end()?"Yes":"No")<<endl;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
   
