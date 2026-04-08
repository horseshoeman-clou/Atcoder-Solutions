#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,k;
cin>>n>>k;

long long low=0, high=2e9;
long long ans=0;

while(low<=high){
long long mid=(low+high)/2;

__int128 sum=(__int128)(mid+1)*(2LL*n+mid)/2;

if(sum>=k){
ans=mid;
high=mid-1;
}
else{
low=mid+1;
}
}
cout<<ans<<"\n";
return 0;
}
