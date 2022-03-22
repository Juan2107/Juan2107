#include <stdio.h>

int main()
{
    int numero;
    int residuo, mcm, i, n;
    int producto;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcm = numero;
            producto = numero;
        }
        else
        {
            producto = mcm * numero;

            do
            {
                residuo = mcm % numero;
                mcm = numero;
                numero = residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
    }

    printf("El mcm es: %d\n", mcm);



    return 0;
}
