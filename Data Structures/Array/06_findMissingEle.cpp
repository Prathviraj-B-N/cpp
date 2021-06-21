#include<iostream>
#define SIZE 10
using namespace std;


void find_missing_sorted(int arr[]){

    int diff = arr[0] ;

    for(int i=0;i<SIZE;i++){

        if(arr[i] - i == diff){
            //element not missing
            continue;
        }else{
            int new_diff = arr[i] - i;
            int j =0;
            while(new_diff!=diff){
                cout<<arr[i-1]+ ++j<<" ";
                diff++;
            }
        }
    }
}

int main(){

    int arr[SIZE] = {1,2,3,4,6,7,8,12,14,16};

    find_missing_sorted(arr);

    return 0;
}