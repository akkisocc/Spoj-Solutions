#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main() {
	
	int n;
	
while(cin>>n){
	int flag=0;
	stack <char> s;
	string str="",newstr="";
	if(n==0)
	break;
	cin>>str;
	
	int j=0;
	while(j<str.length()){
		
		if(flag==0){
			for(int i=0;i<n;++i){
				newstr+=str[j];
				++j;
				flag=1;
			}
		}
		
		if(flag==1){
			
			for(int i=0;i<n;++i){
				s.push(str[j]);
				++j;
			}
			while(!s.empty()){
				newstr+=s.top();
				s.pop();
			}
			flag=0;
			
		}
		
		
	}
	
	for(int i=0;i<n;++i){
		int j=i;
		int x=str.length()/n;
		while(x--){
			cout<<newstr[j];
			j=j+n;
		}
	}
	cout<<endl;
}	
	return 0;
}