#include <stdio.h>
int main()
{
  
    printf("please hit the four numbers that you want to compare");
    int num1,num2,num3,num4;
    int ct=0;
    int empt;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    do
    {
       if (num4>num3){empt=num4;num4=num3;num3=empt;}
       if (num3>num2){empt=num3;num3=num2;num2=empt;}
       if (num2>num1){empt=num2;num2=num1;num1=empt;}
        ct++;
    } while (ct<4);
    printf("the result is %d %d %d %d",num1,num2,num3,num4);
    return 0;
    
}