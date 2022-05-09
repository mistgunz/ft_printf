#include "ft_printf.h"
int main()
{
    char* ss;
    char* sss = NULL;
   //ft_printf("numbers:%d \n char: %c str :%s \n hexup:%X \n adress:%p \n ",22,'z',ss,55,ss );
     //printf("numbers:%d \n char: %c str :%s \n hexup:%X \n adress:%p \n ",22,'z',ss,55,sss );
     ft_printf("ft : %p %p\n",NULL,0);
        printf("origin: %p %p\n",NULL,0);
}