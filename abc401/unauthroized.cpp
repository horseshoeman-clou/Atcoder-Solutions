#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;
int count=0;

string status="logout";

for(int i=0;i<n;i++){
string mode;
cin>>mode;

if(mode=="private" && status=="logout")
count++;
if(mode=="login" && status=="logout")
status="login";
if(mode=="logout" && status=="login")
status="logout";
}

cout<<count<<"\n";
return 0;
}
