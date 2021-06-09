/* we might think output will be :5,6 ... But args for printf is passed from right to left. ++b is evaluated first.
actual output: 6 6
*/
#include <stdio.h>

int main()

{ 
    int b = 5;
    printf("%d %d",b,++b);
    return 0;
}
