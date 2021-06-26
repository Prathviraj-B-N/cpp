#include<iostream>
using namespace std;


int main(){

    char c ='a';
    char c1 = 97;
    
    char d[] = {'a','b'};
    char d1[] = {97,98};

    char e[5];
    char e1[5] = {97,98};

    char f[] = "abc"; //stack
    char *f1 = "abc"; //heap

    cout<<f1;
    printf("%s",f1);

    printf("%c",*f1); //first ele



    return 1;
}