#include <stdio.h>

int main()
{
    char res[10];
    
    printf("Convert Int to string\n");
    
    int x = 100;
    sprintf(res,"%d",x);
    printf("%s\n",res);
    
    printf("Convert Float to string\n");
    
    float y = 192.98;
    sprintf(res,"%.2f",y);
    printf("%s\n",res);
    
    return 0;
}
