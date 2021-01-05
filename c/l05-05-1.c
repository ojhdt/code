#include<stdio.h> 
int main() 
{ double i,j; scanf("%lf%lf",&i,&j); double count=0; for(int k=1;k<=j;k++) { count=i; i*=(1+0.053000); printf("%d %f %f",k,(i-count),i); printf("\n"); } }