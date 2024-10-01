#include <stdio.h>

int main (int argc, char *argv[]) {
    /*
    int mnums[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("nums[%d][%d]: ",i,j);
            scanf("%d",&mnums[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",mnums[i][j]);
        }
        printf("\n");
    }
    */
    char nombres[4][20];
    for (int i = 0; i < 4; i++)
    {
        printf("Nombre %d: ",i);
        fflush(stdin);
        fgets(nombres[i],20,stdin);
        //scanf("%s",&nombres[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s",nombres[i]);
    }
    
    

    return 0;
}