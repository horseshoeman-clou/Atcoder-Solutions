#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int N;
cin>>N;

vector<vector<int>> a(N,vector<int >(N,0));

int row=0;
int col=(N-1)/2;

for(int i=1;i<N*N+1;i++)
{
a[row][col]=i;

int nr=(row-1+N)%N;
int nc=(col+1)%N;

if(a[nr][nc]==0)
{
row=nr;
col=nc;
}
else 
row=(row+1)%N;
}

for(int i=0;i<N;i++)
{
for(int j=0;j<N;j++)
cout<<a[i][j]<<" ";

cout<<"\n";
}

return 0;
}
