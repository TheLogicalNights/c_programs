//Input :  5
//Output: * * * * *
#include<stdio.h>

void Pattern(unsigned int iNo)
{
 int iCnt=0;
 printf("\n");
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
     printf("*\t");
 }
 printf("\n");
}
int main()
{
    unsigned int iValue=0;

    printf("Enter Number\n");
    scanf("%u",&iValue);
    Pattern(iValue);
    return 0;

}