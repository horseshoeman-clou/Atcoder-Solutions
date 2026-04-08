#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int q;
cin>>q;

queue<int> line;

while(q--){
int type;
cin>>type;

if(type==1){
int x;
cin>>x;
line.push(x);
}
else{
cout<<line.front()<<"\n";
line.pop();
}
}
return 0;
}
