#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,m;
		scanf("%lld%lld",&n,&m);
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
			
		long long int csum=0,sum=0,maxc=0,ccount=0;
		int first=0;
		for(int i=0;i<n;++i){
			if(csum+a[i]<=m){
				csum+=a[i];
				++ccount;
			}
			else{
				while(csum+a[i]>m){
					csum-=a[first];
					++first;
					--ccount;
				}
				csum+=a[i];
				++ccount;
				
			}
			
			if(maxc<ccount || (maxc==ccount && csum<sum)){
				maxc=ccount;
				sum=csum;
			}
		}
		cout<<sum<<" "<<maxc<<endl;
	
	}
	return 0;
}