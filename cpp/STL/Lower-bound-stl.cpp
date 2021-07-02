#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 long n,q,temp,query_num;
 vector<long>v;
 cin>>n;
 for(int i=0;i<n;i++){
     cin>>temp;
     v.push_back(temp);
 }
 cin>>q;
 for(int j=1;j<=q;j++){
     cin>>query_num;
     vector<long>::iterator itr=lower_bound(v.begin(),v.end(),query_num);
     
     if(query_num!=*itr){
         cout<<"No "<<(itr-v.begin()+1)<<endl;
     }
     else{
         cout<<"Yes "<<(itr-v.begin()+1)<<endl;
     }
 }
 
    
    
    return 0;
    
}
