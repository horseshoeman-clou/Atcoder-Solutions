#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m,k;

cin>>n>>m>>k;
vector<vector<bool>> solved(n+1,vector<bool>(m+1,false));

vector<int> solvedCount(n+1,0);
vector<int> finishTime(n+1,-1);

for(int i=0;i<=k;i++)
{
int a,b;
cin>>a>>b;

if(!solved[a][b]){
solved[a][b]=true;
solvedCount[a]++;

if(solvedCount[a]==m && finishTime[a]==-1){
finishTime[a]=i;
}
}
}

vector<pair<int,int>> result;

for(int i=1;i<=n;i++)
{
if(finishTime[i]!=-1){

result.push_back({finishTime[i],i});
}
}

sort(result.begin(),result.end());

for(auto &x : result){
cout<<x.second<<" ";
}

return 0;
}


