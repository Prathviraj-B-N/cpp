#include<iostream>
#include "custom_custom_lib.h"
void over_written(){
    std::cout<<"over_written:Redefining this will give redefinition err! i have commented out redef below..."<<std::endl;
}

void not_defined_yet();

void greet(){
    std::cout<<"greet:Hey, nice to meet you!"<<std::endl;
}