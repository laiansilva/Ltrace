#include<iostream>
#include<cctype>
#include<fstream>
#include<string>
#include "struct.hpp"

int Num_char(char caracter, std::string line){
   int number_caracter=0;
   for (int i=0; line[i]; i++){
      if(line[i]==caracter || line[i]== char(std::toupper(caracter))) number_caracter++;
   }
return number_caracter;
}

void verify(file *a){

   std::ifstream arq;
   std::string line;

   arq.open(a->name);   

   if(arq.is_open()){
      while(std::getline(arq, line)){
         for (int i=0; i<sizeof(a->num)/4; i++){
            a->num[i]+=Num_char(a->Letters[i], line);
         }
      }
   }else{
      std::cout<<"Could not open file"<<std::endl;
   }
   
   arq.close();
}

void sort (file *a){
   int aux, aux_Letters;
   for (int i=1; i<sizeof(a->num)/4; i++){
      for(int j=1; j<=sizeof(a->num)/4-i; j++){
         if(a->num[j-1] < a->num[j]){
           aux = a->num[j];
           a->num[j] = a->num[j-1];
           a->num[j-1] = aux;

           aux_Letters = a->Letters[j];
           a->Letters[j] = a->Letters[j-1];
           a->Letters[j-1] = aux_Letters;
         }
      }   
   }


}






























