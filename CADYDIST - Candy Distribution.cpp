#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		if(n==0)
		break;
		long long int group[n];
		long long  int price[n];
		for(int i=0;i<n;++i)
			cin>>group[i];
		for(int i=0;i<n;++i)
			cin>>price[i];
			
		sort(group,group+n);
		sort(price,price+n,greater<int>());
	
			long long int sum=0;
		for(int i=0;i<n;++i)
			sum+=group[i]*price[i];
			
		cout<<sum<<endl;
	}
	return 0;
}