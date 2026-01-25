#include<bits/stdc++.h>
using namespace std;

int main()
{
int p,q,x,y;
cin>>p>>q>>x>>y;

if(x>=p && x<p+100 && y>=q && y<q+100)
{
cout<<"Yes";
}
else cout<<"No";

return 0;
}
