#include <stdio.h>
int max(int x,int y)//函数两个参数（类型） 若函数无参 在（）写void 或空格
{
    int z;
    if (x > y) z = x;
    else z = y;
    return(z);
}
int main()//C语言总是从main开始执行
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d,%d", &a, &b);
    c = max(a,b);
    printf("max=%d\n",c);
    return 0;
}