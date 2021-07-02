#include <iostream>
#include <deque> 
#include<vector>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int>q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!q.empty() && arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() && arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(arr[q.front()]);}
        for(auto i:ans){
            cout<<i<<" ";
        }
    
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
        cout<<endl;
  	}
  	return 0;
}
