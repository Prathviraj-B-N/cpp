#include <iostream>

#define NO_ROW 5
#define NO_COL 5

using namespace std;

int main()
{
    // in program stack
    int twoDimArrayInStack[NO_ROW][NO_COL];
    
    // Partially in heap
    cout<<"Partially in heap"<<endl;
    int *twoDimArray[NO_ROW];
    
    for(int i=0;i<NO_ROW;i++){
        twoDimArray[i] = new int[NO_COL];
    }
    
    //populate
    for(int i=0;i<NO_ROW;i++){
        for(int j=0;j<NO_COL;j++){
            twoDimArray[i][j] = i+j;
        }
    }
    
  //display
    for(int i=0;i<NO_ROW;i++){
        for(int j=0;j<NO_COL;j++){
            cout<<twoDimArray[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // fully in heap
    cout<<"\nfully in heap"<<endl;
    int **twoDimArrayInHeap;
    twoDimArrayInHeap = new int*[NO_ROW];  //important
    for(int i=0;i<NO_ROW;i++){
            twoDimArrayInHeap[i] = new int[NO_COL];
    }
    
    //populate
    for(int i=0;i<NO_ROW;i++){
        for(int j=0;j<NO_COL;j++){
            twoDimArrayInHeap[i][j] = i*j;
        }
    }
    
   //display
    for(int i=0;i<NO_ROW;i++){
        for(int j=0;j<NO_COL;j++){
            cout<<twoDimArrayInHeap[i][j]<<" ";
        }
        cout<<endl;
    }
}
