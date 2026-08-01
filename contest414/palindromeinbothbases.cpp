#include<bits/stdc++.h>
using namespace std;

int a;

long long sum=0;

bool check(long long num){

vector<int> digits;

while(num>0){

digits.push_back(num%a);
num/=a;
}

int l=0, r=digits.size()-1;

while(l<r){
if(digits[l]!=digits[r])
return false;
l++;r--;
}
return true;
}



int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

cin>>a;

long long n;
cin>>n;

for(int i=1;i<1e6;i++){

string s = to_string(i);

string rev=s;
reverse(rev.begin(),rev.end());
long long even = stoll(s+rev);

string rev_odd=s.substr(0,s.size()-1);
reverse(rev_odd.begin(),rev_odd.end());
long long odd = stoll(s+rev_odd);

if(even<=n)
if(check(even))
sum+=even;

if(odd<=n)
if(check(odd))
sum+=odd;
}

cout<<sum<<'\n';
}


