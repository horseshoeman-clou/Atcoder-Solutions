#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int n,i,sum=0;
cin>>n;

for(i=1;i<n+1;i++)
sum+=i;

cout<<sum;
return 0;
}
