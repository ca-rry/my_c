#include<stdio.h>
int main()
{
int a[14]={0};
int i,n,j=1; 
for(i=1;i<14;i++) 
{
n=1;
do{
if(j>13) j=1; 
if(a[j]) j++; 
else{ 
if(n==i) a[j]=i;
j++;
n++; 
} 
}while(n<=i); 
}
for(i=1;i<=13;i++) 
printf("%d ",a[i]);
printf("\n");
}

