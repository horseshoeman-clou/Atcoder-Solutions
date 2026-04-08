#include<bits/stdc++.h>
using namespace std;

int n;

vector<string> rotate90(vector<string>a){
vector<string> b(n,string(n,'.'));
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
b[j][n-i-1]=a[i][j];
}
}
return b;
}


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

cin>>n;

vector<string> s(n),t(n);
for(int i=0;i<n;i++)cin>>s[i];
for(int j=0;j<n;j++)cin>>t[j];

int ans=INT_MAX;

for(int rot=0;rot<4;rot++){
int mismatch=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(s[i][j]!=t[i][j])
mismatch++;
}
}
ans=min(ans,mismatch+rot);
s=rotate90(s);
}
cout<<ans;
return 0;
}
