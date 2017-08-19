#include <iostream>
#include <stdio.h>
#include <iomanip> 
using namespace std;

int main() {
	int l;
	while(cin>>l){
		if(l==0)
		break;
		 double res=(l*l)/(2*3.14);
		cout << fixed << setprecision(2) << res <<endl;
	}
	return 0;
}