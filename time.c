#include <stdio.h>
#include <Windows.h>
int main()
{
    int min,i;

 printf("请输入分钟数:");
 scanf("%d",&min);
 min-=1;
 for (; min >= 0; --min)
{
    i = 60;
    for (; i >= 0; --i)
    {
         printf("还剩 %d 分钟 %d 秒 结束\n", min, i);//输出剩du余时间
         Sleep(1000);//延时函数延zhi时一秒
         system("cls");
    }
}
    printf("计时结束\n");
    system("PAUSE");
    return 0;
};
