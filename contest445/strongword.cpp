#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

int x=s.size();

if(s[0]==s[x-1]) cout<<"Yes\n";
else cout<<"No\n";

return 0;
}
