#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n,greater<int>());
long long sum=0,count=0;
long long max_sum=INT_MIN;
for(int i=0;i<n;i++)
{
sum+=a[i];
if(sum>=max_sum) {
max_sum=sum;
count++;
    }
}
cout<<max_sum<<" "<<count;
}