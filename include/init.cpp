#include<iostream>
#include<cctype>
#include<fstream>
#include<string>
#include "struct.hpp"

void print_f(file *a){
      int i=0;
      std::cout<<a->name<<std::endl;
      while (a->num[i]!=0){
         std::cout<<a->Letters[i]<<" "<<a->num[i]<<std::endl;
         i++;
      }
      std::cout<< std::endl;
}

void init(file *a, char *argv[], int argc){
   for (int i=1; i<argc ;i++){
   a->name=argv[i];
   ++a;   
   }
}































