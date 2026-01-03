#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int d;
cin>>d;

int n;
cin>>n;

while(n+7<=d)
n+=7;

cout<<(n+7)-d;

return 0;
}

