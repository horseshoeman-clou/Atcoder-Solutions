#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<int> canned(m,1);

for(int i=0;i<n;i++)
{
int l;
cin>>l;
vector<int> x(l);

for(int i=0;i<l;i++) cin>>x[i];
bool found=false;
for(int i=0;i<l;i++){

if(canned[x[i]-1]==1){
cout<<x[i]<<"\n";
canned[x[i]-1]=0;
found=true;
break;
}
}
if(!found) cout<<0<<"\n";
}
return 0;
}
