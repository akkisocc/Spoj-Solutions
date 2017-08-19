#include <iostream>
using namespace std;

int main() {
	int a,t,dig,res;
	unsigned long long b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b==0){
		cout<<1<<endl;
		continue;
		}
		if(b==1){
		cout<<a%10<<endl;
		continue;
		}
		dig=a%10;
		for(int i=2;i<=b;++i){
			res=dig*a;
			dig=res%10;
		}
		cout<<dig<<endl;
	}
	return 0;
}