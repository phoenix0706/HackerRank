#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  cout<<a.length()<<" "<<b.length()<<endl;
  cout<<a+b<<endl;
  cout<<b.substr(0,1)+a.substr(1);
  cout<<" "<<a.substr(0,1)+b.substr(1);
    return 0;
}
