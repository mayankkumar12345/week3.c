#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}

int num=0;
for(i=0;i<n;i++){
	num+=arr[n-1-i]*pow(2,n-1-i);
}
printf("%d",num);	
	return 0;
}
