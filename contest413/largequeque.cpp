#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int q;
cin>>q;

queue<pair<long long,long long>> A;

for(int i=0;i<q;i++){

int format;
cin>>format;

if(format == 1){

long long c,x;
cin>>c>>x;

A.push({c,x});
}

else{

long long k;
cin>>k;

long long sum = 0;

while(k>0){

auto [cnt,val] = A.front();

if(cnt<=k){
sum+=cnt*val;
k-=cnt;
A.pop();
}
else{
sum+=k*val;
A.front().first-=k;

k=0;
}
}

cout<<sum<<'\n';
}
}

}



