#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int a;
cin>>a;

if(400%a!=0)
cout<<-1<<"\n";
else
cout<<400/a<<"\n";

return 0;
}
