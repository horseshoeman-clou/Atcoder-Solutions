#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,k;
cin>>n>>k;

const long long MOD=1000000000;

if(n<k){
cout<<1<<"\n";
return 0;
}

vector<long long > a(n+1);

for(int i=0;i<k;i++)
a[i]=1;

long long window=k;

for(int i=k;i<=n;i++){
a[i]=window%MOD;
window=(window+a[i]-a[i-k]+MOD)%MOD;
}

cout<<a[n]%MOD<<"\n";
return 0;
}
