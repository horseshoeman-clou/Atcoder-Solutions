#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<pair<int,int>> p;

for(int i=1;i<=n;i++)
{
int x;
cin>>x;
p.push_back({x,i});
}

sort(p.begin(),p.end());

for(int i=0;i<3;i++)
{
cout<<p[i].second<<" ";
}

return 0;
}

