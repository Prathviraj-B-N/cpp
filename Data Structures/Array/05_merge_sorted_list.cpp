#include <iostream>

using namespace std;

typedef struct Array{
    int *p;
    int size;
};

void inputArr(Array *arr){
    cout<<"Enter size of array: "<<endl;
    cin>>arr->size;
    arr->p = new int[arr->size];
    cout<<"Enter array elements in sorted order :"<<endl;    

    for(int i=0;i<arr->size;i++){
        cin>>arr->p[i];
    }
}

void displayArr(Array arr){
    for(int i =0;i<arr.size;i++){
        cout<<arr.p[i]<<" ";
    }
    cout<<endl;
}

void merge(Array *arr1,Array *arr2,Array *res){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<arr1->size && j<arr2->size){
        
        if(arr1->p[i] < arr2->p[j]){
            //code runs till here
            res->p[k] = arr1->p[i];
            k++;i++;
        }else{
            cout<<"y";
            res->p[k] = arr2->p[j];
            cout<<res->p[k];
            k++;j++;
        }
    }

    while(i<arr1->size){
        res->p[k] = arr1->p[i];
        k++;i++;
    }
    
    while(j<arr2->size){
        res->p[k] = arr2->p[j];
        k++;j++;
    }
    
}

int main(){

    Array arr1;
    Array arr2;
    inputArr(&arr1);
    inputArr(&arr2);
    cout<<"Arr1 :"<<endl;
    displayArr(arr1);
    cout<<"Arr2 :"<<endl;
    displayArr(arr2);
    cout<<endl;

    Array arrRes;
    arrRes.size = arr1.size + arr2.size; 
    arrRes.p = new int[arrRes.size];
    merge(&arr1,&arr2,&arrRes);
    cout<<"Res :"<<endl;
    displayArr(arrRes);
    cout<<endl;

    return 0;
}