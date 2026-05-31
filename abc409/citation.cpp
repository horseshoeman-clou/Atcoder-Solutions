#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<long long > a(n);
for(int i=0;i<n;i++)cin>>a[i];

sort(a.rbegin(),a.rend());

int ans=0;

for(int  i=1;i<=n;i++){
if(a[i-1]>=i)
ans=i;
}
cout<<ans<<"\n";

return 0;
}
