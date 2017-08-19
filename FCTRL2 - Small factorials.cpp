#include <iostream>
#include <climits>
using namespace std;

int fact(int n){
	if(n==0)
	return 1;
	return n*fact(n-1);
	
}


int main() {
	int t,n;
	long long int res;
	cin>>t;
	while(t--){
		cin>>n;
		res=0;
		res=fact(n);
		cout<<res<<endl;
	}
	
	return 0;
}