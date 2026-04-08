#include<bits/stdc++.h>
using namespace std;

const int MOD=1000000007;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

string N;
int k;
cin>>N>>k;

int n=N.size();

vector<vector<long long>> dp(k+1,vector<long long>(2,0));
dp[0][1]=1;

for(int pos=0;pos<n;pos++){
vector<vector<long long>> next_dp(k+1,vector<long long>(2,0));

int digit=N[pos]-'0';
for(int sum=0;sum<=k;sum++){
for(int tight=0;tight<=1;tight++){
if(dp[sum][tight]==0) continue;
int limit=tight? digit:9;
for(int d=0;d<=limit;d++){
if(sum+d>k) continue;

int new_tight=(tight &&(d==limit))?1:0;
next_dp[sum+d][new_tight]=(next_dp[sum+d][new_tight]+ dp[sum][tight]) %MOD;
}
}
}
dp=next_dp;
}

long long answer=(dp[k][0]+dp[k][1])%MOD;

if(k==0) answer=(answer-1+MOD)%MOD;
cout<<answer<<"\n";
return 0;
}
