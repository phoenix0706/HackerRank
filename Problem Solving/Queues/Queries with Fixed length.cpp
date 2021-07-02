#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,dq;
    cin>>n>>dq;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    deque<int>q;
    while(dq--){
        int d;
        cin>>d;
        vector<int>semians;
        for(int i=0;i<d;i++){
            while(!q.empty()&& q.back()<arr[i]){
                q.pop_back();
            }
            q.push_back(arr[i]);
        }
        semians.push_back(q.front());
        for(int i=d;i<n;i++){
            if(q.front()==arr[i-d]){
                q.pop_front();
            }
            while(!q.empty()&& q.back()<arr[i]){
                q.pop_back();
            }
            q.push_back(arr[i]);
            semians.push_back(q.front());
            
        }
        int fans=INT_MAX;
        for(auto itr:semians){
            
             fans=min(itr,fans);
        }
        cout<<fans<<endl;
        semians.clear();
        q.clear();
    }
}
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    

        
