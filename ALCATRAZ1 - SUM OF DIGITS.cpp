#include <iostream>
#include <string>
using namespace std;

int main() {
	unsigned long long int t,sum,rem;
	string s;
	cin>>t;
	
	while(t--){
		cin>>s;
		
		sum=0;
		for(int i=0;i<s.length();++i){
			sum+=(int)s[i]-48;
			
		}
		
		cout<<sum<<endl;
	}
	
	return 0;
}