#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

map<int,int> cnt;

for(int i=0;i<n;i++){
int x;
cin>>x;
cnt[x]++;
}

for(int i=0;i<m;i++){
int x;
cin>>x;
if(cnt[x]>0)
cnt[x]--;
}

for(auto i:cnt){
while(i.second>0){
cout<<i.first<<" ";
i.second--;
}
}

return 0;
}
