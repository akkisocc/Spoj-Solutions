#include <iostream>
#include <map>
using namespace std;

int main() {
	int t,n;
	string str1,str2,str3,str4,str5,str6;
	cin>>t;
	while(t--){
		cin>>n;
		map<string,int> dup;
		string str="";
		for(int i=0;i<n;++i){
			cin>>str1>>str2>>str3>>str4>>str5>>str6;
			str=str1+" "+str2+" "+str3+" "+str4+" "+str5+" "+str6;
			dup[str]++;
			
		}
		map<string,int>::iterator it;
		for(it=dup.begin();it!=dup.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
		}
		cout<<endl;
	}
	return 0;
}