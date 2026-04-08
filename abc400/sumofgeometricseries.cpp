#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,m;
cin>>n>>m;

long long limit=1e9;
long long term=1;
long long sum=1;

for(int i=1;i<=m;i++)
{
if(term>limit/n){
cout<<"inf\n";
return 0;
}
term*=n;
sum+=term;
if(sum>limit){
cout<<"inf\n";
return 0;
}
} 
cout<<sum<<"\n";
return 0;
}
