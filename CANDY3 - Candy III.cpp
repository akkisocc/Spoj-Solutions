#include <iostream>
using namespace std;

int main() {
	long long int n,t;
	cin>>t;
	
	while(t--){
	
		cin>>n;
		long long int a[n];
		long long int sum=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			sum+=a[i];
		}
		cout<<sum<<endl;
		if(sum%n==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		
		
		
	}
	return 0;
}