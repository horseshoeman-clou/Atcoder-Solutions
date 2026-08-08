#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;
long long maxR=0, minR=1e9+1, maxC=0, minC=1e9+1;

for(int i=0;i<n;i++){

long long r,c;
cin>>r>>c;

maxR=max(maxR,r);
minR=min(minR,r);
maxC=max(maxC,c);
minC=min(minC,c);
}

long long rowDiff = maxR - minR;
long long colDiff = maxC - minC;

long long ans=max( (rowDiff+1)/2, (colDiff+1)/2);

cout<<ans<<'\n';
}
