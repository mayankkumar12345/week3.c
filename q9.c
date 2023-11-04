#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int first=0,second=1,i,nt;
	printf("%d %d ",first,second);
for(i=2;i<=n;i++){
			nt=first+second;
			first=second;
			second=nt;
		printf("%d ",nt);
	
}
	return 0;
}
