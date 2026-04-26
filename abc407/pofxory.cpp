#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int x,y;
cin>>x>>y;

int good=0;

for(int i=1;i<=6;i++){
for(int j=1;j<=6;j++){
if((i+j>=x) || (abs(i-j)>=y)){
good++;
}
}
}
cout<<fixed<<setprecision(12)<<(double)good/36<<"\n";
}
