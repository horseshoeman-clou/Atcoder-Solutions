#include<bits/stdc++.h>
using namespace std;

int nextnum(int n)
{
int sum=0;
while(n>0)
{
int rem=n%10;
sum+=rem*rem;
n/=10;
}

return sum;
}

bool isHappy(int n)
{
int slow=n;
int fast=n;
do{
slow=nextnum(slow);
fast=nextnum(nextnum(fast));
}while(slow!=fast);

return slow==1;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

if(isHappy(n))
cout<<"Yes";
else cout<< "No";

return 0;
}
