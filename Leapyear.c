#include<stdio.h>
int main()
{
    int a;
//take any year input from user
    printf("enter any year number? \n");
    scanf("%d",&a);

    if(a%4==0){
        printf("year is leap");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}
