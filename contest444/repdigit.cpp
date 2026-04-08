#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

int n=s.size();

int word=s[0];

for(int i=0;i<n;i++){

if(s[i]!=word){
cout<<"No\n";
return 0;
}
}

cout<<"Yes\n";
return 0;
}
