#include<stdio.h>
#include<conio.h>
void Toh(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("\n move disk 1 from %c to %c",a,c);
        return;
    }
    Toh(n-1,a,b,c);
    printf("\n move disk %d from %c to %c ",n,a,c);
    Toh(n-1,b,c,a);
}
int main()
{
    int n;
    printf("enter a number of disk: \n");
    scanf("%d",&n);
    Toh(n,'a','b','c');
    return ;
}
