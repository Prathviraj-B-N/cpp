#include <stdio.h>

int main()
{
    
    /*static*/
    //int A[5];
    
    /*static with initialization*/
    int A[5] = {1,2};  /* [1,2,0,0,0] */
    int B[5] = {0};  /* [0,0,0,0,0] */
    int C[] = {0,1,2,3}; /* [0,1,2,3] */
    
    /*Access methods*/
    int size = 5; /*say*/
    for(int i=0;i<size;i++){
        printf("%d",A[i]);
        printf("\n");
      
        printf("%d",i[A]);
        printf("\n");
      
        printf("%d",*(A+i));
        printf("\n");
    }
    
    return 0;
}
