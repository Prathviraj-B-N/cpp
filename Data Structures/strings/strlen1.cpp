#include<iostream>
using namespace std;

int strlen(char *c){

    int count =0;
    
    for(int i=0;c[i]!= '\0';i++,count++);
    
    return count;
}

int main(){

    char *c = "hey";
    cout<<strlen(c);
    return 1;
    
}