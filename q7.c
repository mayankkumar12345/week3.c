#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for( i=1;i<=10;i++){
		int g=n*i;
		printf("%d*%d=%d\n",n,i,g);
	}
	return 0;
}
