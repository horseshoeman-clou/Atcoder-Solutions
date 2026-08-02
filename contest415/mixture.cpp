#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;

for(int i=0;i<t;i++){

int n;
string s;
cin>>n>>s;

vector<bool> dp(1<<n);
dp[0]=true;

for(int mask=1;mask<(1<<n);mask++){

for(int j=0;j<n;j++){
if((mask>>j)&1){

if(s[mask-1] == '0' && dp[mask^(1<<j)] == true){
dp[mask] = true;
}
}
}
}

cout<< (dp[(1<<n)-1] ? "Yes\n" : "No\n");
}

}
