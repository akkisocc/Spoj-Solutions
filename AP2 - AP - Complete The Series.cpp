#include <iostream>
using namespace std;

int main() {
	 long long int t,third,lthird,sum,a,d,n;
	cin>>t;
	while(t--){
		cin>>third>>lthird>>sum;
		n=(2*sum)/(third+lthird);
		d=(lthird-third)/(n-5);
		a=third-(2*d);
		cout<<n<<endl;
		for(int i=0;i<n;++i)
		cout<<a+i*d<<" ";
		cout<<endl;
		
		
		
	}
	return 0;
}