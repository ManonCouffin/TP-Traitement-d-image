
#include <stdio.h>

int main()
{
    int ligne, colonne, valeur, i, j;
    scanf("%d", &ligne);
    scanf("%d", &colonne);
    for (i =0; i<ligne; i++)
    {
      		for(j=0; j<colonne; j++)
			{
				scanf("%d", &valeur);
				if(valeur<64)
					valeur = 0;
				else if(valeur<128)
					valeur = 1;
				else if(valeur<192)
					valeur = 2;
				else if(valeur<256)
					valeur = 3;
				printf("%d ", valeur);
			}
		printf("\n");
	}
    

    return 0;
}

