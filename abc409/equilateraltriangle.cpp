#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,l;
cin>>n>>l;

if(l%3!=0){
cout<<0<<"\n";
return 0;
}

vector<long long> freq(l,0);

int pos=0;
freq[0]++;

for(int i=0;i<n-1;i++){
int d;
cin>>d;

pos=(pos+d)%l;
freq[pos]++;
}

int step=l/3;
long long ans=0;

for(int p=0;p<step;p++){

int a=p;
int b=p+step;
int c=c=p+2*step;

ans+=freq[a]*freq[b]*freq[c];
}

cout<<ans<<"\n";
}

