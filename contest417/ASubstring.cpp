#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,a,b;
cin>>n>>a>>b;

string s;
cin>>s;

for(int i=0;i<n;i++)
{
if(i<a)
continue;
 
 if(i>=n-b)
 continue;
 
 cout<<s[i];

 }
 
 return 0;
 }
