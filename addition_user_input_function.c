// Program: Addition using Function
// Description: Takes two numbers from user and returns their sum using a function

#include<stdio.h>

int addition(int value1, int value2)
{
    int add = 0;

    add = value1 + value2;

    return add;
}

int main()
{
    int no1 = 0, no2 = 0;
    int ans = 0;

    printf("Enter the first Number :\n");
    scanf("%d",&no1);

    printf("Enter the second number :\n");
    scanf("%d",&no2);

    ans = addition(no1,no2);

    printf("The Addition of %d and %d is %d\n",no1,no2,ans);

    return 0;
}