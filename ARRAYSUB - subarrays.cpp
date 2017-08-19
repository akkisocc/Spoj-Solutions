#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	cin>>k;	
	for(int i=0;i<=n-k;++i)
		cout<<*max_element(a+i,a+i+k)<<" ";
	return 0;
}