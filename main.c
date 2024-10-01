#include <stdio.h>

int main (int argc, char *argv[]) {

    float mnums[3][6]={{1,2,3,4,5,6},
                     {7,8,9,10,11,12},
                     {13,14,15,16,17}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%.2f\t",mnums[i][j]);
        }
        printf("\n");
    }

    char nombres[4][20]={"Luis","Jose","Juan","Maria"};
    
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",nombres[i]);
    }
    
    

    return 0;
}