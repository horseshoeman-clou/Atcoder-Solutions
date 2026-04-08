#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

long long ans=0;
for(int a=0;a<=60;a++)
{
long long p=1LL<<a;
if(p>n)break;

long long x=n/p;

long long limit=sqrtl(x);

while((limit+1)*(limit+1)<=x) limit++;
while(limit*limit>x) limit--;

ans+=(limit+1)/2;
}
cout<<ans<<"\n";
return 0;
}
