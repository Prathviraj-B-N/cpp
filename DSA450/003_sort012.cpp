#include<iostream>

void sort012(int a[], int n)
    {
        // coode here 
        int count[2] ={0};
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count[0]++;
            }
            else if(a[i]==1){
                count[1]++;
            }
        }
        int i =0;
        for(;i<count[0];i++){
            a[i] = 0;
        }
        
        for(int j =0;j<count[1];i++,j++){
            a[i] = 1;
        }
        
        
        for(;i<n;i++){
            a[i] = 2;
        }
    }

int main(){

    int a[] = {2,2,0,0,0,1};
    sort012(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}