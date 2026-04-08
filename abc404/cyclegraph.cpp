#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;

vector<vector<int>>adj(n+1);
vector<int> deg(n+1,0);

for(int i=0;i<m;i++){
int a,b;
cin>>a>>b;

adj[a].push_back(b);
adj[b].push_back(a);
deg[a]++;
deg[b]++;
}
if(m!=n){
cout<<"No\n";
return 0;
}

for(int i=1;i<=n;i++){
if(deg[i]!=2){
cout<<"No\n";
return 0;
}
}

vector<bool> vis(n+1,false);

function<void(int)> dfs=[&](int u){
vis[u]=true;
for(int v:adj[u]){
if(!vis[v]) dfs(v);
}
}
;

dfs(1);

for(int i=1;i<=n;i++){
if(!vis[i]){
cout<<"No\n";
return 0;
}
}
cout<<"Yes\n";
return 0;
}
