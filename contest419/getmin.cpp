#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int q;
cin>>q;

vector<int> bag;

for(int i=0;i<q;i++){
int f;
cin>>f;

if(f == 1){
int n;
cin>>n;

bag.push_back(n);
}
else{
auto min_it=min_element(bag.begin(),bag.end());
int min_e=*min_it;
bag.erase(min_it);
cout<<min_e<<'\n';
}
}

}
