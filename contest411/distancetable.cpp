#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<int> d(n-1);
for(int i=0;i<n-1;i++) cin>>d[i];

int pos=0;

while(pos<=n-1){
int sum=0;
for(int i=pos;i<n-1;i++){
sum+=d[i];
cout<<sum<<' ';
}
cout<<'\n';
pos++;

}


}
