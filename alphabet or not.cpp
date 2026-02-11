#include<stdio.h>
int main()
{
    char a;
    printf("Enter the digit :\n");
    scanf(" %d",&a);
    int lower(a>'A'&&a<='Z');
    int upper(a>='a'&&a<='z');
    int res=lower||upper;
    printf("the %c is an alphabet  is %d",a,res);
   return 0;
}
