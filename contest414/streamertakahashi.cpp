#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,l,r,count=0;
cin>>n>>l>>r;

for(int i=0;i<n;i++){

int s,t;
cin>>s>>t;

if(s<=l && t>=r)
count++;
}

cout<<count<<'\n';
}

