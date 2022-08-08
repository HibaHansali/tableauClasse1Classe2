#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int C1[13];
    int C2[15];
    int tri[28];
    int i, j, N, moy,k=13;
    int c =0;
    int min, max;
do{
    printf ("pour sortir du prog entrer 0\n");
    printf("Donner le numero du classe : ");
    scanf("%d", &N);
    switch (N) 
    {
    case 1:
        printf("Entrer les notes pour la premiere classe:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &C1[i]);
        }
        max = C1[0];
        min = C1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < C1[i])
                max = C1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (C1[i] < min)
                min = C1[i];
        }
        for (i = 0; i < 13; i++)
                {if (C1[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiants>=10 est:%d\n",c);
        printf("la grande moyenne est:%d\nla petite moyenne est: %d\n ", max, min);
        break;

    case 2:
        printf("Entrer les notes pour la deuxieme classe :\n");
        for (i = 0; i < 15; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &C2[i]);
        }
        max = C2[0];
        min = C2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < C2[i])
                max = C2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > C2[i])
                min = C2[i];
        }
                for (i = 0; i < 15; i++)
                {if (C2[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiants>=10 est:%d\n",c);
        
        printf("la grande moyenne est:%d\nla petite moyenne est: %d\n", max, min);
        break;
    case 3:
       // printf("veuiller entrer les notes pour les deux classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=C1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[k]=C2[i];
         k++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("les notes des deux classes par ordre croissant est:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("veuiller choisir 1 ou 2 ou 3");
    }
    }while(N!=0);
    }