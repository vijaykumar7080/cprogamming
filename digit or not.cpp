#include<stdio.h>
int main()
{
    char a;
    printf("Enter the digit :\n");
    scanf(" %d",&a);
    int lower=a>=0;
    int upper=a<=9;
    int res=lower&&upper;
    printf("the %d is digit is %d",a,res);
   return 0;
}
