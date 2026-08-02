#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<int> a(n);

for(int i=0;i<n;i++) cin>>a[i];

int x;
cin>>x;

if(find(a.begin(), a.end(),x) != a.end()){
cout<<"Yes\n";
return 0;
}

cout<<"No\n";

return 0;
}


