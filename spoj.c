#include<stdio.h>
#include<conio.h>
// 50/100
// No te anotaste en el lista ni indicas que ejercicio estas haciendo -50

int main()
{
    char num[2]={-1,-1};
    while(1)
    {
            if((num[0]=='4')&&(num[1]=='2'))
                       continue;
            else
            {
                num[0]=getch();
                num[1]=getch();
                if((num[0]=='4')&&(num[1]=='2'))
                           continue;
                printf("%c%c\n",num[0],num[1]);
            }
    }
    return 0;
}
