/*

Output:

1 (input)

Size doubled from 1 to 2 (output)

2 (input)

Size doubled from 2 to 4

3 
4 

Size doubled from 4 to 8

5 
6 
7 
8 

Size doubled from 8 to 16
^C

*/

#include<iostream>
using namespace std;

int main()
{
  /*Array that never overfloaws...,if you have unlimited storage*/
 
    int size = 1;
    int i =0;
    
    int *dynamic_arr_in_heap = new int[size] ;
    
    int input;
    do{
        cin>>input;
        dynamic_arr_in_heap[i] = input;
        if(i == size-1){
            int prev_size = size;
            size = size<<1;
            int *temp_array = new int[size];
            for(int j=0;j<prev_size;j++){
                temp_array[j] = dynamic_arr_in_heap[j];
            }
            delete []dynamic_arr_in_heap;
            dynamic_arr_in_heap = temp_array;
            temp_array = nullptr;
            cout<<"Size doubled from "<<prev_size<<" to "<<size<<endl;
        }
        i++;
    }
    while(input);
    
  
    delete []dynamic_arr_in_heap;
    return 0;
}
