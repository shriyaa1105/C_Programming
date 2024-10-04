#include<stdio.h>
#include<conio.h>
int main(){
    int m;
    printf("Enter the number of days: ");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        printf("%d days are 31",m);
    }
    else if(m==4||m==6||m==9||m==11){
        printf("30 days");
}
else if(m==2){
    printf("28 days");
}
else {
    printf("Invalid month");
}
return 0;
}
