#include<stdio.h>
int main(){
int n,r;
scanf("%d",&n);
int g=n;
int count=0;
while(g>0){
r=g%10;
count++;
g=g/10;	
}
int ld,fd;
int count2=0;
while(n>0){
	r=n%10;
	count2++;
	if(count2==1){

	ld=r;}
	else if(count2==count){
	
	fd=r;}
	n=n/10;
}	
	printf("%d",ld+fd);	
		return 0;
}
