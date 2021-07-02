#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        if(q==1){
            string str;
            int marks=0;
            cin>>str>>marks;
            if(mp.find(str)!=mp.end()){
            mp[str]=mp[str]+marks;}
            else{
                mp.insert(make_pair(str, marks));
            }
        }
        if(q==2){
            string str;
            cin>>str;
            mp.erase(str);
        }
        if(q==3){
            string str;
            cin>>str;
            cout<<mp[str]<<endl;
        }
    }  
    return 0;
}



