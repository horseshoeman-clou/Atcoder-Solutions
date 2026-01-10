#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int l,r;
cin>>l>>r;

string s;
cin>>s;

l--; r--;
for(int i=l;i<=r;i++)
{
if(s[i]!='o')
{
cout<<"No";
return 0;
}
}

cout<<"Yes";
return 0;
}



