#include<iostream>

using namespace std;

void swap(float *ele1,float* ele2){
    float temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

void reArrange(float *arr,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        
        while(arr[i]<0)
            i++;
        while(arr[j]>=0)
            j--;
            if(i<j){
                swap(&arr[i],&arr[j]);
                i++;
                j--;
            }
    }
}

void display(float *arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void input(float* arr,int n){
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;

    cout<<"Enter Size of array"<<endl;
    cin>>n;

    float *arr = new float[n];

    input(arr,n);

    cout<<"Before reArranging: ";
    display(arr,n);

    reArrange(arr,n);

    cout<<"After reArranging: ";
    display(arr,n);

    return 0;
}