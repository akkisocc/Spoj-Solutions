#include <iostream>
using namespace std;

int main() {
	int n,c=0;
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;j++){
			if(i*j<=n)
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}