#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<vector<int>> usedIn(n+1);

vector<int> remaining(m);

for(int i=0;i<m;i++){
int k;
cin>>k;
remaining[i]=k;

for(int j=0;j<k;j++){
int x;
cin>>x;
usedIn[x].push_back(i);
}
}

vector<int> order(n);
for(int i=0;i<n;i++)
cin>>order[i];

int edible=0;
for(int day=0;day<n;day++){
int ing=order[day];

for(int dish : usedIn[ing]){
remaining[dish]--;

if(remaining[dish]==0)
edible++;
}
cout<<edible<<"\n";
}
return 0;
}
