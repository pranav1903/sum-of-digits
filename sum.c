#include<stdio.h>  
int main()    
{    
    int n,sum,m;    
    
    printf("Enter a number : ");    
    scanf("%d",&n);    
    
    sum=0;
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }    
    
    printf("Sum = %d",sum);    
    return (0);  
}   
