#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>>n>>x;

int sum=0;

for(int i=0;i<n;i++){
int j;
cin>>j;
sum+=j;
}

cout<<(sum <= x? "Yes\n" : "No\n");

}
