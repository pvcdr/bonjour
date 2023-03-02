#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *c)
{
        int     i;
        int     resultat;
        int     compteur_moins;
        int     compteur_plus;

        resultat = 0;
        compteur_moins = 0;
        compteur_plus = 0;
        i = 0;
        while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
        i++;
        while (c[i] == '-' || c[i] == '+' )
        {       if (c[i] == '-')
                {
                        compteur_moins += 1;
                }
                if (c[i] == '+')
                {
                        compteur_plus += 1;
                }
                if (compteur_moins > 1 || compteur_plus > 1 || compteur_plus == compteur_moins)
                return (0);
        i++;
        }
        while (c[i] >= '0' && c[i] <= '9')
        {
                resultat = resultat * 10 + c[i] - 48;
                i++;
        }
        if (compteur_moins == 1)
        return (-resultat);
        else if (compteur_plus == 1)
        return (resultat);
        else
        return (resultat);
}

int        main(void)//
{
    char a[] = "    \n\n\v\f\r\t -+5234Ae1AAgreghrsth";// -5234
    printf("%d\n",ft_atoi(a));//
    printf("%d\n", atoi(a));
}
