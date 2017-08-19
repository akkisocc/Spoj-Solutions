#include <iostream>
using namespace std;


int reverseNum(int n1){
	int temp1=n1;
	int rem1,rev1=0;

	while(temp1>0){
		rem1=temp1%10;
		rev1=rev1*10+rem1;
		temp1=temp1/10;
	}
	return rev1;
	
}



int main() {
	int n,n1,n2,res;
	cin>>n;
	while(n--){
		cin>>n1;
		cin>>n2;
		n1=reverseNum(n1);
		n2=reverseNum(n2);
		res=n1+n2;
		res=reverseNum(res);
		cout<<res<<endl;
	}
	return 0;
}