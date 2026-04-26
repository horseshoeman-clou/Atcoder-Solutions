#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

long long curr=0;
long long ans=0;

for(int i=s.size()-1;i>=0;i--){
int d=s[i]-'0';

int need = (d-curr +10)%10;

ans+=need;

curr=(curr+need)%10;

ans++;
}

cout<<ans<<"\n";
}
