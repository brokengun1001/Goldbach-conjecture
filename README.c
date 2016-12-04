# Goldbach-conjecture
验证哥德巴赫猜想

#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
    int i,k;
    int judge=1;
    if(n==1)
        judge==0;
    k=(int)sqrt(n);
    for(i=2;judge&&i<=k;i++)
        if(n%i==0)
        judge=0;
    return judge;
}
int main()
{
    int a,b,sum,n=1;
   
    for(sum=4;sum<=2000;sum+=2)
    {
        for(a=2;a<=sum/2;a++)
        {	
            if(IsPrime(a)&&IsPrime(sum-a))
            {
            printf("%4d=%4d+%4d",sum,a,sum-a);
            n++;
            break;
        	}
            if(n%4==0)
                printf("\n");
            else
                printf(" ");
        }
    }
}
