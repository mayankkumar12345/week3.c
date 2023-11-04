#include<stdio.h>
int main(){
	int n,r;
	scanf("%d",&n);
	while(n>0){
		r=n%2;
	printf("%d",r);
		n=n/2;
	}
	return 0;
}
