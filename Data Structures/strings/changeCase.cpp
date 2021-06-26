#include<iostream>
using namespace std;

void lowtoup(char *c){
    *c= *c-('a'-'A');
}

void uptolow(char *c){
    *c= *c+('a'-'A');
}

void convert(char *ca){
    for(int i=0;ca[i]!='\0';i++){
        if(ca[i]<='z' && ca[i]>='a'){
            lowtoup(&ca[i]);
        }else if (ca[i]<='Z' && ca[i]>='A'){
            uptolow(&ca[i]);
        }
    }  
}

int main(){
    
    char c[] = "heLLo_WORld_gaME_**&&oN";
    convert(c);
    cout<<c;
    cout<<endl;
    
    return 0;
}