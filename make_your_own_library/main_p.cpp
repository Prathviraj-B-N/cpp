#include "custom_lib.h"
using namespace std;

int main(){
    greet();
    not_defined_yet();
    over_written();
    fun_2nd_hfile();
    return 0;
}

void not_defined_yet(){
    cout<<"not_defined_yet:This function is prototyped in header file, so no error even when we call before defining."<<endl;
}

// void over_written(){
//     cout<<"This function is being modified,which is illegal . Therefore it can't run"<<endl;
// }