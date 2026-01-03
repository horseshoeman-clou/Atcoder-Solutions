#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

string s,t;
cin>>s>>t;


int ans=INT_MAX;

for(int i =0;i+m<=n;i++)
{
int cost=0;
for(int j=0;j<m;j++)
{
int a=s[i+j]-'0';
int b=t[j]-'0';
cost+=(a-b+10)%10;

}
ans=min(ans,cost);
}

cout<<ans<<"\n";

return 0;
}

