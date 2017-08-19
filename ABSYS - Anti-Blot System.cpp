#include <iostream>
#include <string>
#include<locale>

using namespace std;
bool allDigit(string str){
	for(int i=0;i<str.length();++i){
		if(isalpha(str[i]))
			return false;
	}	
	return true;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string op1,op2,plus,eq,op3;
		int result;
		cin>>op1>>plus>>op2>>eq>>op3;
		
		if(allDigit(op1) && allDigit(op2)){
			result = stoi(op2)+stoi(op1);
			cout<<op1<<" + "<<op2<<" = "<<result<<endl;
		}
		if(allDigit(op1) && allDigit(op3)){
			result = stoi(op3)-stoi(op1);
			cout<<op1<<" + "<<result<<" = "<<op3<<endl;
		}
		if(allDigit(op2) && allDigit(op3)){
			result = stoi(op3)-stoi(op2);
			cout<<result<<" + "<<op2<<" = "<<op3<<endl;
		}
	}
	return 0;
}