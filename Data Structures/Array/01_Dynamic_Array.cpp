#include<iostream>
using namespace std;

int main()
{
  /*get place in stack*/
  int n;
  cin>>n;
  int dynamic_arr_in_stk[n] = {1};
  
  for(int i=0;i<n;i++){
    cout<<dynamic_arr_in_stk[i]<<endl;
  }
  
  /*get place in heap*/
  int *dynamic_arr_in_heap = new int[n] ;
  
  dynamic_arr_in_heap[0] = 2;
  
  for(int i=0;i<n;i++){
    cout<<dynamic_arr_in_heap[i]<<endl;
  }
  delete []dynamic_arr_in_heap;
  return 0;
}
