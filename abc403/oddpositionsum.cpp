#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;
long long sum=0;

vector<long long> a(n);

for(int i=0;i<n;i++) cin>>a[i];

for (int i=0;i<n;i+=2)
sum+=a[i];

cout<<sum<<"\n";

return 0;
}
