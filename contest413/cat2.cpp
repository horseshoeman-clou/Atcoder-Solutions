#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<string> S(n);
for(int i=0;i<n;i++) cin>>S[i];

unordered_set<string> cat;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){

if(i!=j){
cat.insert(S[i]+S[j]);
}
}
}

cout<<cat.size()<<'\n';

}

