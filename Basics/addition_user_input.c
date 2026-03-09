// Program: Addition using Function
// Description: Takes two numbers from user and perform the addition
#include<stdio.h>

int main()
{
    int no1 = 0, no2 = 0;
    int ans = 0;

    printf("Enter the First Number : \n");
    scanf("%d",&no1);

    printf("Enter the Second Number : \n");
    scanf("%d",&no2);

    ans = no1 + no2;

    printf("The Addition of %d and %d is %d\n",no1,no2,ans);

    return 0;
}