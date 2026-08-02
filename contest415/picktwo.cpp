#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

int m=0;

for(int i=0;i<s.size();i++){

if(s[i] == '#'){

if(m%2 == 0){
cout<<i+1<<',';
}
else{
cout<<i+1<<'\n';
}

m++;
}
}

}
