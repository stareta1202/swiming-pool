
#include <unistd.h>

#include<unistd.h>
    
//  간단히 한글자 입력하는 함수
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
//러쉬 함수가 너무 길어져서 나눈 함수 맨위에 있는경우

void    topXlocation(int temp_x, int x)
{           

        if(temp_x == 1)
        {
            ft_putchar('/');
        }else if(temp_x == x)
        {
            ft_putchar('\\');
        }else
        {
            ft_putchar('*');
        }
}
//러쉬 함수가 너무 길어져서 나눈 함수 맨위에 있는경우
void    middleXLocation(int temp_x, int x)
{
    if(temp_x == 1 || temp_x == x)
    {
        ft_putchar('*');
    }else
    {
        ft_putchar(' ');
    }

}
//러쉬 함수가 너무 길어져서 나눈 함수 맨위에 있는경우
void    bottomXLocation(int temp_x, int x)
{
        if(temp_x == 1)
        {
            ft_putchar('\\');
        }else if(temp_x == x)
        {
            ft_putchar('/');
        }else
        {
            ft_putchar('*');
        }
}
// 러쉬 함수
void    rush(int x, int y)
{
    int temp_x;
    int temp_y;

    temp_y = 1;
    while(temp_y <= y)
    {
        temp_x = 1;
        while (temp_x <= x)
        {
            if(temp_y == 1)
            {
                topXlocation(temp_x, x);
            }else if(temp_y == y)
            {
                bottomXLocation(temp_x, x);
            }else
            {
                middleXLocation(temp_x, x);
            }
            temp_x ++;
        }
        temp_y ++;
        ft_putchar('\n');
    }
}

int     main() 
{
    rush(4,4);
    return (0);
}