#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n>0){
	int r=n%10;
		printf("%d",r);
		n=n/10;
	}
	return 0;
}
