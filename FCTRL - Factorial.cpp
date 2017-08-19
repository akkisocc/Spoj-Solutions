#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long int n,temp;
	int t,i;
	cin>>t;
	while(t--){
		cin>>n;
		temp=0;
		i=1;
		while(pow(5,i)<=n){
		temp+=n/pow(5,i);
		i++;
		}
		cout<<temp<<endl;
	}
	return 0;
}