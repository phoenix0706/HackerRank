
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    multiset<int> se;
    int n, i;
          cin>>n;
    while(n--){
        cin>>i;
        
        if (i == 1) {
            int num;
            cin>>num;
            se.insert(num);
            v.push_back(num);
        } else if (i == 2) {
            int num = *v.rbegin();
            se.erase(se.find(num));
            v.pop_back();
        } else {
           cout<<*se.rbegin()<<endl;
        }
    }
}
