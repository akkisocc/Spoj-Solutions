//#include <climits>
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main() {
	int b[1000],g[1000];
	int small,lar,reg,i=0,n;
	
	while(1){
		cin>>b[i];
		cin>>g[i];
		if(b[i]==-1 && g[i]==-1)
		break;
		i++;
	}
	n=i;
	for(i=0;i<n;i++){
		small=min(b[i],g[i]);
		lar=max(b[i],g[i]);
		
		reg=ceil((float)lar/(small+1));
		cout<<reg<<endl;
	}
	
	return 0;
}