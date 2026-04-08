#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

int n=s.length();

double ans=0.0;

for(int i=0;i<n;i++){
if(s[i]!='t') continue;

int cnt=0;

for(int j=i+1;j<n;j++){

if(s[j]=='t'){
if(j-i+1>=3){
double rate=(double)cnt/(j-i-1);
ans=max(ans,rate);
}
cnt++;
}
}
}

cout<<fixed<<setprecision(10)<<ans<<"\n";
return 0;
}
