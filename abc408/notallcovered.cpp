#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,m;
cin>>n>>m;

vector<long long> diff(n+2,0);

for(int i=0;i<m;i++){
long long l,r;
cin>>l>>r;

diff[l]++;
diff[r+1]--;
}

int cover=0;
int mn=INT_MAX;

for(int i=1;i<=n;i++){
cover+=diff[i];
mn=min(mn,cover);
}

cout<<mn<<"\n";

return 0;
}
