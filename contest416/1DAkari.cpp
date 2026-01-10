#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

int n=s.size();

bool insegment=false;

for(int i=0;i<n;i++)
{

if(s[i]=='#')
{
insegment=false;
}
else if(s[i]=='.')
{
if(!insegment)
{s[i]='o';
insegment=true;
}
}
else
continue;
}
cout<<s;
return 0;
}
