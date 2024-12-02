#include <stdio.h>
void ft_print_comb2(void) {

        int     c;
        int     x;


        c = 0;
        while (c < 100)
        {
                x = 0;
                while(x < 100)
                {
                        printf("%02d", x);
                        printf(" %02d\n", c);
                        x++;
                }
                c++;
        }

}

int     main(int)
{
        ft_print_comb2();
        return (0);
}
