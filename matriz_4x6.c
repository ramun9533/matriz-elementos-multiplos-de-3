#include <stdio.h>

int main()
{
    // imprime tabla 4x6
    //multiplos de 3
    // imprime tabla
    
    int mat [4][6];
    int i, j, k,l, acum=0, acum1, acum2 ;
    acum1=0;
    for(i=0;i<6;i++)
    { //if ((acum%3)==0)
        //  printf("\n %d es multiplo de 3 \n", acum);
        for(j=0;j<4;j++)
        {
            
            acum=acum+2;  
           printf("%d \t",acum);
            mat [j][i]=acum;
            acum1=acum+acum1;
           //if ((acum1)%3==0)
           //printf("\n %d es multiplo de 3 \n", acum1); 
           //if ((acum)%3==0)
           //printf("\n %d es multiplo de 3 \n", acum); 
            
        }
    
        printf("\n");
       
       
    }
    for(i=0;i<6;i++)
    { //if ((acum%3)==0)
        //  printf("\n %d es multiplo de 3 \n", acum);
        for(j=0;j<4;j++)
        {
            
            acum=acum+2;  
           //printf("%d \t",acum);
            mat [j][i]=acum;
            acum1=acum+acum1;
           if ((acum1)%3==0)
           printf("\n %d es multiplo de 3 \n", acum1); 
           if ((acum)%3==0)
           printf("\n %d es multiplo de 3 \n", acum); 
            
        }
    
        printf("\n");
       
       
    }
    printf("Hello World");

    return 0;
}
