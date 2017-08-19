#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	double e,ec,f,fc,m,mc,s,sc;
	while(cin>>e>>f>>s>>m>>ec>>fc>>sc>>mc){
		if(e==-1&&ec==-1&&f==-1&&fc==-1&&s==-1&&sc==-1&&m==-1&&mc==-1)
		break;
		
	int a[4];
	a[0]=ceil((double)e/ec);
	a[1]=ceil((double)f/fc);
	a[2]=ceil((double)s/sc);
	a[3]=ceil((double)m/mc);
	int max_ele=*max_element(a,a+4);
	a[0]=(max_ele-(e/ec))*ec;
	a[1]=(max_ele-(f/fc))*fc;
	a[2]=(max_ele-(s/sc))*sc;
	a[3]=(max_ele-(m/mc))*mc;
	for(int i=0;i<4;++i)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}