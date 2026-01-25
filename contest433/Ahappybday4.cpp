#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x,y,z;
cin>>x>>y>>z;

for(int i=0;i<100;i++)
{
if((y+i)*z==(x+i))
{
cout<<"Yes";
exit(0);
}
}

cout<<"No";

return 0;
}

