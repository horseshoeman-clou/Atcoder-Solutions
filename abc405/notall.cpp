#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> seen(m+1,0);
int distinct=0;

for(int i=n-1;i>=0;i--){
if(a[i]<=m && seen[a[i]]==0){
seen[a[i]]=1;
distinct++;
}

if(distinct==m){
cout<<n-i<<"\n";
return 0;
}
}
cout<<n<<"\n";
}
