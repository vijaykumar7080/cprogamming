#include<stdio.h>
int main()
{
    char a;
    printf("Enter the alphabet :\n");
    scanf(" %d",&a);
    int lower=a>='A';
    int upper=a<=6;
    int res=lower&&upper;
    printf("the %d is uppercase alphabet is %d",a,res);
   return 0;
}
