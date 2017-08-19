#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
	//	if(k==1){cout<<0<<endl;continue;}
		
		sort(a,a+n);
	
		int small=INT_MAX;
		
		for(int i=0;i<=n-k;++i){
			if((a[i+k-1]-a[i])<small)
				small=a[i+k-1]-a[i];
		}
		
			cout<<small<<endl;
		
		
	}
	return 0;
}