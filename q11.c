#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int g=n;
	int f=n;
	int r;
	int count=0;
		while(g>0){
		r=g%10;
		count++;
		g=g/10;
	}
	int rn=0;
	while(n>0){
		r=n%10;
		rn+=r*pow(10,count-1);
		count--;
		n=n/10;
	}
	if(rn==f){
	
printf("the number is palindrome");}
else{

printf("the number is not palindrome");}
	return 0;
}
