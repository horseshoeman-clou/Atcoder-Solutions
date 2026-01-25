#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,i,count=0,l,r,sum=0;
cin>>n;
vector<int> a(n);

for(i=0;i<n;i++)
cin>>a[i];

for(l=0;l<n;l++)
{sum=0;
for(r=0;r<n;r++)
sum+=a[r];

if(a[l]%sum!=0)
count++;
}

cout<<count;
return 0;
}
