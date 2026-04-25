#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int a,b,c,d;

cin>>a>>b>>c>>d;

if(c<a ||(c==a&& d<b))
cout<<"Yes\n";
else
cout<<"No\n";
}
