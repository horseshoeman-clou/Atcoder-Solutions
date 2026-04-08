#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int r,x;
cin>>r>>x;

if(x==1 && r>=1600 &&r<=2999){
cout<<"Yes\n";
return 0;
}
else if(x==2 && r>=1200 && r<=2399){
cout<<"Yes\n";
return 0;
}
else
cout<<"No\n";


return 0;
}
