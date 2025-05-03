#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    if(yr%400==0 || (yr%4==0&& yr%100!=0))
    printf("the year is a leap year : %d",yr);
    else 
    printf("the year is not a leap year : %d",yr);
    return 0;
}