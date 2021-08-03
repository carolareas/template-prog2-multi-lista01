#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 9. Dada uma sequência de inteiros, faça um programa em C que diga se ela é umaPG, uma PA ou nenhuma das duas.

enum EnumEx9
{
  PA = 0,
  PG = 1,
  Outro = -1
};

EnumEx9
exercicio9(int v[], int tamanho)
{
  int cont1, cont2, razao1, razao2, i;
   cont1=0;
   cont2=0;
   razao1= v[1]-v[0];
   razao2= v[1]/v[0];

//PA
for(i=0; i<tamanho; i++){
    if (v[i+1]-v[i]==razao1){
        cont1+=1;
}

}
//PG
for(i=0; i<tamanho; i++){

    if (v[i+1]/v[i]==razao2){
        cont2+=1;

}
}
if (cont1==tamanho-1){
    return PA;
}

if (cont2==tamanho-1){
    return PG;
}

  return Outro; // PA ou PG
}
