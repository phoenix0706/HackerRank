#include <cmath>
#include <cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,q,s=0;
    
    cin>>n>>q;
    int *arr[n];
    while(n--){
        int num;
        cin>>num;
        arr[s]=new int[num];

    
    for(int i=0;i<num;i++){
        cin>>arr[s][i];
        }
        s++;
    }
   while(q--){
       int a,b;
       cin>>a>>b;
       cout<<arr[a][b]<<endl;
           }

}

