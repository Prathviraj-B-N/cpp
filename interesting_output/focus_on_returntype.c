#include <stdio.h>

square(float x){
    return x*x;
}

int main()
{ 
    float b = 1.2,c;
    c = square(b);
    printf("%f",c);
    return 0;
}
