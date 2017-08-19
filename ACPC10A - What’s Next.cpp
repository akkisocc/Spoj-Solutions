#include <iostream>
using namespace std;

int main() {
	double a0,a1,a2;
	while(cin>>a0>>a1>>a2){
		if(a0==0&&a1==0&&a2==0)
		break;
		if((a2-a1)==(a1-a0))
		cout<<"AP"<<" "<<a0+3*(a1-a0)<<endl;
		if((a1/a0)==(a2/a1))
		cout<<"GP"<<" "<<a2*(a1/a0)<<endl;
	}
	return 0;
}