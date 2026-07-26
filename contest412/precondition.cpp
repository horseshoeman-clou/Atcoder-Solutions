#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);

string S,T;
cin>>S>>T;

bool has=true;

for(int i=1;i<(int)S.size();i++){

if(isupper(S[i])){

if(T.find(S[i-1])==string::npos){
has=false;
}
}
}

cout<<(has ?"Yes":"No");
cout<<'\n';

}

