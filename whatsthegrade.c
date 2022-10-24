#include <stdio.h>
int main()
{
    int grade;
    char leval;
    printf("please hit your grade in\n");
    scanf("%d",&grade);
    switch (grade/10)
    {
    case 10:leval='A' ;break;
    case 9:leval='A';break;
    case 8:leval='B';break;
    case 7:leval='C';break;
    case 6:leval='D';break;

    
    default:leval='E';break;
    }
    printf("your leval is %c",leval);
    return 0;
}