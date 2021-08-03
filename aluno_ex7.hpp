#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 7.Um número de Fibonacci é dado por f(n) = f(n-1) + f(n-2), onde f(0) = 0 e f(1) =1.
// Faça um programa em C que dadon, calcule o número de Fibonacci den.
int
exercicio7(int n)
{
  int a, b, aux, i;
  a = 0;
  b = 1;
  if (n == 0){
    return 0;
  }
if (n == 1){
  return 1;
}
    for(i = 0; i < n - 1 ; i++) {

        aux = a + b;
        a = b;
        b = aux;


    }
  return(aux);
}
