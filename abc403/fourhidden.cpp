#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string t,u;
cin>>t>>u;

int n=t.size();
int m=u.size();

for(int i=0;i+m<=n;i++){

bool ok=true;

for(int j=0;j<m;j++){
if(t[i+j]!='?' && t[i+j]!=u[j]){
ok=false;
break;
}
}
 if(ok){
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
return 0;
}
