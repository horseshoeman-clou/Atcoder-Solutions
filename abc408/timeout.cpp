#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
float s;
cin>>n>>s;

vector<double> times(n);
for(int i=0;i<n;i++) cin>>times[i];

double prev=0;

for(int i=0;i<n;i++){
if(times[i]-prev>=s+0.5){
cout<<"No\n";
return 0;
}

prev=times[i];
}

cout<<"Yes\n";
return 0;
}
