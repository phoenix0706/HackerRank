#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'downToZero' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int downToZero(int n) {
    queue<int>q;
    int dp[1000001]={0};
            q.push(n);
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                if(curr==0){
                    break;
                    
                }
                if(dp[curr-1]==0){
                    q.push(curr-1);
                    dp[curr-1]=dp[curr]+1;
                }
                for(int i=sqrt(curr);i>=2;i--){
                    if(curr%i==0 && dp[curr/i]==0){
                     q.push(curr/i);
                     dp[curr/i]=dp[curr]+1;   
                    }
                }
            }
            return dp[0];    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
