#include <iostream>
using namespace std;

int main() {
	float n;
	while(cin>>n){
		if(n==0)
			break;
		int count=0;
		float sum=0,i=1;
		while(sum<n){
			++count;
			++i;
			sum+=1.0/i;
		}
		cout<<count<<" card(s)"<<endl;;
	}
	return 0;
}