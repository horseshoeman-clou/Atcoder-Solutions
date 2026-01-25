#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

while(n!=1&&n!=4)
{
int sum=0;
int temp=n;
while(temp>0)
{
int rem=temp%10;
sum+=rem*rem;
temp/=10;
}
n=sum;
}

if(n==1) cout<<"Yes";
else 
cout<<"No";

return 0;
}
