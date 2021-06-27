#include<bits/stdc++.h>
#define R register int
using namespace std;
namespace Luitaryi {
inline int g() { R x=0,f=1;
	register char ch; while(!isdigit(ch=getchar())) f=ch=='-'?-1:f;
	do x=x*10+(ch^48); while(isdigit(ch=getchar())); return x*f;
} const int N=100010;
int n,mx,mn,a[N];
inline void main() {
	mn=n=g(); for(R i=1;i<=n;++i) a[i]=g();
	sort(a+1,a+n+1); 
	if((a[n-1]-a[1]+1==n-1&&a[n]-a[n-1]+1>3)||(a[n]-a[2]+1==n-1&&a[2]-a[1]+1>3)) mn=2;
	else {
		R p=1;
		for(R i=1;i<=n;++i) {
			while(p<n&&a[p+1]-a[i]+1<=n) ++p;
			mn=min(mn,n-(p-i+1));
		}
	} printf("%d\n%d\n",mn,max(a[n-1]-a[1],a[n]-a[2])-n+2);
		
}
} signed main() {Luitaryi::main(); return 0;}