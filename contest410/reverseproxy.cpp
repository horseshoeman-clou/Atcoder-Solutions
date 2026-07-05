#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,q;
cin>>n>>q;

vector<int> x(q);

for(int i=0;i<q;i++) cin>>x[i];

vector<int> cnt(n+1,0);
int bestBox=1;

for(int i=0;i<q;i++){

if(x[i]>=1){
cout<<x[i]<<' ';
cnt[x[i]]++;
}
else{
bestBox=1;
for(int box=2;box<=n;box++){
if(cnt[box]<cnt[bestBox]){
bestBox=box;
}
}
cout<<bestBox<<' ';
cnt[bestBox]++;
}
}

 }

