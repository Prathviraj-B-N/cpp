#include<iostream>

using namespace std;

class Array{
private:
    int *Arr;
    int size;
    int len;
public:
    Array(){
        Arr = new int[10];
        size = 10;
        len = 0;
    }

    Array(int Size){
        size = Size;
        Arr = new int[size];
        len = 0;
    }

    void display(){
        for(int i=0;i<len;i++){
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }

    void push(int val){
        if(len==size){
            cout<<"Array full!"<<endl;
            return;
        }
        Arr[len-1] = val;
        len++;
    }

    void insert(int idx,int val){
        if(idx>=size || idx<0){
            cout<<"Array index out of range"<<endl;
            return;
        }
        if(len == size){
            cout<<"Array Full!"<<endl;
            return;
        }

        for(int i=len-1;i>=idx;i--){
            Arr[i+1] = Arr[i];
        }
        Arr[idx] = val;
        len++;
    }

    ~Array(){
        delete []Arr;
    }

};



int main(){

    Array a(5);
    a.insert(0,1);
    a.insert(0,1);
    a.insert(0,1);
    a.insert(0,1);
    a.insert(4,5);
    a.display();
    return 0;

}