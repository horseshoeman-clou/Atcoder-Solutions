#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<vector<int>> a(n, vector<int>(n,0));
 
int row=0,col=(n-1)/2; 

for(int i=1;i<=n*n;i++)
{
a[row][col]=i;

int nr=(row-1+n)%n;
int nc=(col+1)%n;

if(a[nr][nc]==0)
{
row=nr;
col=nc;
}
else
row=(row+1)%n;
}



for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";

cout<<"\n";
}

return 0;
}

