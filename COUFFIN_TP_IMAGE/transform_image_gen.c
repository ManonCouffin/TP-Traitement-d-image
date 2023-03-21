
#include <stdio.h>
#include <math.h>

int main()
{
    int ligne, colonne, niveau, i, j, valeur;
    scanf("%d", &niveau);
    
    scanf("%d", &ligne);
    scanf("%d", &colonne);
    
    if(log2(niveau)==(int)log2(niveau))
    {
		for (i =0; i<ligne; i++)
		{
			for(j=0; j<colonne; j++)
			{

				scanf("%d", &valeur);

				//verifit que les valeurs sont inferieure à 256
				if(valeur>256)
				{	
					printf("Erreur 1 : le niveau de gris est supérieur à 256. \n");
					return 0;
				}
				else 
					//niveau de gris
					printf("%d ", valeur/(256/niveau));
			}
			printf("\n");
		}
	}
	else 
	{
		printf("Erreur 2: le niveau de gris n’est pas une puissance de 2 \n");
		return 0;
	}
    
    
    

    return 0;
}

