#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
vector<string>v;
    
void insert(string & name, string & val){
    string full;
    for(string &str:v){
        full=full+str+".";}
        full.pop_back();
          full += "~" + name;     
    mp[full] = val;
    
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q;
    cin>>n>>q;
    string name;
    for(int i=0;i<n;++i){
        char c;
        cin>>c;
        if(cin.peek()=='/'){
            string cn;
            cin>>cn;
            v.pop_back();
        }
        else{
            string name;
            cin>>name;
            if(name.back()=='>'){
                name.pop_back();
                v.push_back(name);
                
            
        }
          
            else {
            v.push_back(name);     // adding tag name int vector
                 
                for(;;) { 
                    string attr_name, attr_val, eq;
                    cin >> attr_name >> eq >> attr_val; 
                    if(attr_val.back() == '>') { 
                        attr_val.pop_back();    
                        attr_val.pop_back();    
                        attr_val = attr_val.substr(1);  
                        insert(attr_name, attr_val);
                        break;
                    }
                    else {
                        attr_val.pop_back();
                        attr_val = attr_val.substr(1);
                        insert(attr_name, attr_val);
                    }
                }
            }
                
        }
    }
    
    
    for(int i = 0; i < q; ++i) {
        string quer;
        cin >> quer;
        if(mp.find(quer) != mp.end())
            cout << mp[quer] << endl;
        else 
            cout << "Not Found!" << endl;
    }
    
    return 0;
}
