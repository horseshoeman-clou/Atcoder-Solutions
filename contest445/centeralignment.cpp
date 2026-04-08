#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<string> S(n);

for(int i=0;i<n;i++) cin>>S[i];

long long m=0;
for(int i=0;i<n;i++){
if(S[i].size()>m) {
m=S[i].size();
}
}

for(int i=0;i<n;i++){
int k=m-S[i].size();

int left=k/2;
int right=k-left;

for(int j=0;j<left;j++)
cout<<".";

cout<<S[i];

for(int j=0;j<right;j++)
cout<<".";

cout<<"\n";
}

return 0;
}

