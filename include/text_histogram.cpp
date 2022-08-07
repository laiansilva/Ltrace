/*
++++++++++++++++++++++++++++++++++++++++++++++++++
Autor: Laian de Moura Silva <laianufba@gmail.com>
===================================================

   This program receives a list of files by parameters and shows on the screen a frequency histogram of each letter in
   descending order for each of the files.
   
   The implementation was through a structure of the type: 
      
      typedef struct  {
        std::string name; 
        std::string Letras="abcdefghijklmnopqrstuvwxyz";
        int num[26]={};   
      } arquivo;

   where the variable name stores the names of the file, the variable Letters stores the letters of the alphabet that will be used in
   the comparison with the text to be analyzed, and in a store the number of times that the corresponding letter appeared in the analyzed
   text.
   
   The program has the following functions "init", "verify", "sort", where:
 
      The "start" function is responsible for starting the structure with the names of the files passed to the executable program
      the print function is responsible for printing the name of the analyzed file and the letters that each one has in descending order  
      both functions are in the include folder and are added by the header "init.hpp"

      The functions check and sort are found in the include directory and are added by the header "calc.hpp"
      "verifica" has the function of opening the file and reading line by line and checking the number of characters read in each
      line. The "Sort" function uses the Bubble sort algorithm to sort the letter numbers in descending order.

   The program can be run with ./text_histogram <name of the text file> and as many files as the user needs can be added.
*/
#include<fstream>
#include<string>

using namespace std;
#include "struct.hpp" // Add the struct with name of file
#include"init.hpp"
#include"calc.hpp"

int main (int argc, char *argv[]){

   file *arq, struct_arq[argc]; // Pointer and array to strutc
   arq = struct_arq; // Making the pointer point to the first element of the structure
   init(arq, argv, argc);// 
   arq = struct_arq;

   for (int i=1; i<argc;i++){ // loop que varre os arquivos salvos em argv. 
      verify(arq); // Calcula a quantidade de ocorrencia de cada letra no texto passado.  
      sort(arq); // Ordena as variaveis Letras e Num da estrutura d
      print_f(arq); // Imprime o resultado ordenado. 
      ++arq;
   }
return 0;
}





















