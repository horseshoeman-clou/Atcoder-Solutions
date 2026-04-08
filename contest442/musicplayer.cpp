#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int volume=0;
bool playing=false;

int n;
cin>>n;

while(n--){
int a;
cin>>a;

if(a==1) volume++;
else if(a==2){
if(volume>0) volume--;
}
else{ 
playing=!playing;
}

if(volume>=3 && playing)
cout<<"Yes\n";
else cout<<"No\n";
}

return 0;
}
