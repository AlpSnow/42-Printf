#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int testoverflow(int x, int y)
{
        return (x * y);
}

int     main(void)
{
        char carac = 'a';
        char *str = NULL;
        char *str1 = "";
        char *str2 = "tout le monde";
        void *ptr = NULL;
        char *ptr1 = &carac;
        int     nb = 2147483646;
        int nb1 = -2147483648;
        unsigned int nbr = 4294967294;
        unsigned int nbr1 = -20;
        unsigned int nbr2 = 0;

        ft_printf("Bonjour %c\n", carac);
        ft_printf("Bonjour %s\n", str);
        ft_printf("Bonjour %s\n", str1);
        ft_printf("Bonjour %s\n", str2);
        ft_printf("Bonjour %p\n", ptr);
        ft_printf("Bonjour %p\n", ptr1);
        ft_printf("Bonjour %d\n", nb);
        ft_printf("Bonjour %i\n", nb1);
        ft_printf("Bonjour %u\n", nbr);
        ft_printf("Bonjour %u\n", nbr1);
        ft_printf("Bonjour %u\n", nbr2);
        ft_printf("Bonjour %x\n", nbr);
        ft_printf("Bonjour %x\n", nbr1);
        ft_printf("Bonjour %X\n", nbr);
        ft_printf("Bonjour %X\n", nbr1);

        ft_printf("\n");

        printf("Bonjour %c\n", carac);
        printf("Bonjour %s\n", str);
        printf("Bonjour %s\n", str1);
        printf("Bonjour %s\n", str2);
        printf("Bonjour %p\n", ptr);
        printf("Bonjour %p\n", ptr1);
        printf("Bonjour %d\n", nb);
        printf("Bonjour %i\n", nb1);
        printf("Bonjour %u\n", nbr);
        printf("Bonjour %u\n", nbr1);
        printf("Bonjour %u\n", nbr2);
        printf("Bonjour %x\n", nbr);
        printf("Bonjour %x\n", nbr1);
        printf("Bonjour %X\n", nbr);
        printf("Bonjour %X\n", nbr1);


        ft_printf("\n---------------\n\n");

        ft_printf("overflow mon printf %d\n", testoverflow(2147483646, -21500));
        printf("overflow vrai printf %d\n", testoverflow(2147483646, -21500));

        ft_printf("\n");

        ft_printf("mon printf %d\n", ft_printf("%p ", ptr1));
        printf("vrai printf %d\n", printf("%p ", ptr1));

        ft_printf("mon printf %d\n", ft_printf("%d ", nb1));
        printf("vrai printf %d\n", printf("%d ", nb1));

        ft_printf("dernier test %p %p\n", ptr, -1);

        ft_printf("");
        printf("");

        ft_printf("mon printf %d\n", ft_printf(""));
        printf("vrai printf %d\n", printf(""));

        ft_printf(NULL);
        ft_printf("mon printf %d\n", ft_printf(NULL));
        printf(NULL);
        printf("vrai printf %d\n", printf(NULL));

        ft_printf("TEST: %d\n", UINT_MAX + 0);
        printf("TEST: %d\n", UINT_MAX + 0);
        ft_printf("TEST: %d\n", UINT_MAX * -2);
        printf("TEST: %d\n", UINT_MAX * -2);
        ft_printf("TEST: %X\n", UINT_MAX - 0);
        printf("TEST: %X\n", UINT_MAX - 0);
        ft_printf("TEST: %X\n", UINT_MAX * -2);
        printf("TEST: %X\n", UINT_MAX * -2);

        ft_printf("\n---------------\n\n");

        ft_printf("mon printf %s\n", NULL);
        ft_printf("mon printf %%%%%%\n, %s\n", "TEST");
        ft_printf("mon printf %s\nINT %d\nUINT %u\nHEX %X\nPTR %p\n", "TEST", INT_MIN, UINT_MAX - 0, -1, NULL);
        printf("mon printf %s\nINT %d\nUINT %u\nHEX %X\nPTR %p\n", "TEST", INT_MIN, UINT_MAX - 0, -1, NULL);
        return (0);
}
