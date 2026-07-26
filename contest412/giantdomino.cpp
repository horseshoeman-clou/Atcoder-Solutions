#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;

while(t--){

int n;
cin>>n;

vector<long long>s(n);

for(int j=0;j<n;j++) cin>>s[i];

if(s[n-1]<=2*s[0]){
cout<<2<<'\n';
continue;
}

vector<long long> mid;

for(int i=1;i<n-1;i++){

mid.push_back(s[i]);
sort(mid.begin(),mid.end());

long long curr=s[0];

int ans=2;

size_t ptr = 0;

priority_queue


