#include<stdio.h>

int num1,num2;

int getGcd(){
    int gcd;
    int a = num1;
    int b =num2;
    if(a == 0){
        gcd = b;
    }
    else if(b == 0){
        gcd = a;
    }
    else{
        int rem = a%b;
        while(rem != 0){
            a= b;
            b = rem;
            rem = a%b;
        }
        gcd = b;
    }

    return gcd;
}

int getLcm(int g){
    return (num1*num2)/g;
}

int main(){
    scanf("%d%d",&num1,&num2);
    int g = getGcd();

    printf("gcd:%d\n",g);
    printf("lcm:%d",getLcm(g));

    return 0;
}