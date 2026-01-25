#include<bits/stdc++.h>
using namespace std;

int main()
{

ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

string s{};
cin>>s;

int y=s.length();

int x=n-y;

for(int i=0;i<x;i++)
{
cout<<"o";
}

cout<<s;

return 0;
}

