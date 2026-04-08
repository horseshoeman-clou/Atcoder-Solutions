#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;
int count=0;

for(int i=0;i<s.length();i++)
{

if(s[i]=='i' || s[i]=='j')
count++;
}

cout<<count;
return 0;
}
