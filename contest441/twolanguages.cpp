#include<bits/stdc++.h>
using namespace std;

string s;

bool isTcheck(string w)
{
bool isT=true;

int l=w.size();
bool included=false;
for(int i=0;i<l;i++)
{
for(int j=0;j<n;j++)
{
if(s[j]==w[i]) included=true;
}

if(!included) isT=false;

return isT;
}
string t;
bool isAcheck(string w){
bool isA=true;

int l=w.size();
bool included=false;
for(int i=0;i<l;i++){
for(int j=0;j<n;j++)
{
if(t[j]==w[i]) included=true;
}
}

if(!included) isA=false;

return isA;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n,m;

cin>>s>>t;

int q;
cin>>q;

while(q--){
string w;
cin>>w;

bool isT=isTcheck(w), isA=isAcheck(w);

if(isT && !isA) cout<<"Takahashi"<<endl;
else if(!isT && isA) cout<<"Aoki"<<endl;
else cout<<"Unknown"<<endl;

}
return 0;
}

