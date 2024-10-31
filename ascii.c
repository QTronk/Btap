#include<stdio.h>
#include<stdlib.h>
main (void){
	char n;
	//int i=0;
	do{
	printf("Nhap 1 ky tu: ");
	scanf("%c",&n);
	fflush(stdin);
if((48<=n) && (n<=57)){ //decimal
		printf("so vua nhap:%c\n", n);}
else if((n>='a') && (n<='z')){
	printf("ky tu vua nhap la:%c\n",n);
	printf("chu hoa:%c\n",n-32);
	}
	else if((n>='A') && (n<='Z')){
		printf("ky tu vua nhap la:%c\n",n);
		printf("chu thuong:%c\n",n+32);
		}
		else
		exit(0);
		}	
while((48<=n) && (n<=57) ||(n>='a') && (n<='z') ||(n>='A') && (n<='Z') );
//while(i<1);
}
