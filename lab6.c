#include<stdio.h>
int fact(int);
int main(){
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int factorial=fact(n);
printf("factorial of the n is:%d",factorial);
return 0;

}
int fact(int n)
{
    if(n<=0)
    {


        return 1;
    }
    else
    {
        return n*fact(n-1);

    }
}
