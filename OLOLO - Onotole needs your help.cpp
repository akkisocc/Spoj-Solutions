#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
		int n;
		long long signed int res=0;
		cin>>n;
		long long signed int a[n];
		for(int i=0;i<n;++i){
		scanf("%lld",&a[i]);
			res^=a[i];
		}
		cout<<res<<endl;		
		return 0;
}