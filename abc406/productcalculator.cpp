#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>>n>>k;
vector<long long> a(n);
for(int i=0;i<n;i++) cin>>a[i];

long long limit=1;
for(int i=0;i<k;i++) limit*=10;

long long prod=1;
for(int i=0;i<n;i++){
if(prod>(limit-1)/a[i])
prod=1;
else
prod*=a[i];
}

cout<<prod<<"\n";
}
