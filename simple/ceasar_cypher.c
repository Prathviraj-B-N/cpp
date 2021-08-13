#include<stdio.h>
#include<stdlib.h>
char str[100];
    int key;

void cypher(){
    for(int i=0;str[i]!='\0';i++){
        char s = str[i];
        if(s >= '0' && s<='9'){
            if((s+key) <= '9'){
                str[i] = s+key;
            }
            else{
                str[i] = (s+key) - '9' + '0'; 
            }
        }
    }
    printf("%s",str);
}

int main(){
    scanf("%s",str);
    scanf("%d",&key);

    if(key>25 || key<0){
        printf("INVALID KEY!\n");
        return 0;
    }

    cypher();

    return 0;
}