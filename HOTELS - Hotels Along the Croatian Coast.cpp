#include <iostream>
using namespace std;

int main() {
	int n;
	long  int m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	
	long long int sum=0,csum=0;
	int first=0;
	for(int i=0;i<n;++i){
		if(csum+a[i]<=m)
			csum+=a[i];
	
	else{
		while(csum+a[i]>m){
			csum-=a[first];
			++first;
		}
		csum+=a[i];
	}
	if(csum>sum){
		sum=csum;
	}
	}
	printf("%lld\n",sum);
	return 0;
}