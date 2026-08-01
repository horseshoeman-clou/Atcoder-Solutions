#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

string s;

for(int i=0;i<n;i++){
char c;
long long l;
cin>>c>>l;

if(s.size()+l>100){
cout<<"Too Long\n";
return 0;
}

s+=string(l,c);
}

cout<<s<<'\n';
}
