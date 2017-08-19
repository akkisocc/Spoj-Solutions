#include <iostream>
#include <string>
using namespace std;

void subString(string str,string inp){
		int n=str.length();
		int count=0;
		for(int i=0;i<n;++i){
			if(str.substr(i,3)==inp)
				count++;
		}
		cout<<count<<" ";
	
}


int main() {
	int t,n;
	string arr[8]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
	string str;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>str;
		cout<<n<<" ";
		for(int i=0;i<8;++i){
			subString(str,arr[i]);
		}
		cout<<endl;
		
	}
	return 0;
}