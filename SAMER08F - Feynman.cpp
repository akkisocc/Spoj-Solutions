#include <iostream>
using namespace std;

int main() {
	int i,t,n;
	long int res;
	while(cin>>n){
		
		if(n==0){
			cout<<endl;
			break;
		}
		res=0;
		for(i=n;i>0;--i)
		res+=i*i;
		cout<<res<<endl;
	}
	return 0;
}