#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> v;
    int q1;
    int q2,q3;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        
    v.push_back(temp);
    }
    cin>>q1>>q2>>q3;
    v.erase(v.begin()+q1-1);
    v.erase(v.begin()+q2-1,v.begin()+q3-1);
  cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}
