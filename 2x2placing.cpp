#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int N,M;
cin>>N>>M;

vector<vector<int>> a(N,vector<int>(N,0));

long long int row,col,count=0;

for(int i=0;i<M;i++)
{
cin>>row>>col;

row--;
col--;

a[row][col]=1;
}

for(int i=0;i+1<N;i++)
for(int j=0;j+1<N;j++)
{
if( a[i][j]==0&&a[i+1][j]==0&&a[i][j+1]==0&&a[i+1][j+1]==0)
count++;
}

cout<<count;
return 0;
}
