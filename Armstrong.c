#include<stdio.h>
int armstrong(int);
int armstrong(int n)
{
    int sum,temp,d,r,p;
    sum=0;
    temp=n;
    d=(int)(log10(n)+1);
    while(n!=0)
    {
        r=n%10;
        p=(int)(pow(r,d)+0.5);
        sum=sum+p;
        n=n/10;
    }
    n=temp;
    if(sum == n) {
        return 1;
    }
    else
        return 0;
}


int main()
{
    int n;
    scanf("%d",&n);

    if(armstrong(n)) {
        printf("Armstrong");
    }
    else
        printf("Not an armstrong");
}
