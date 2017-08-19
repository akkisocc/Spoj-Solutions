#include <iostream>
using namespace std;

int main() {
	int t,l,sum=0,i;
	cin>>t;
	while(t--){
		cin>>l;
		sum=l*2;
		for(i=l-1;i>0;i--){
			sum+=i*2+i;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}