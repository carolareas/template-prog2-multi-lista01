#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 8. Faça um programa em C que dado um número inteiro, COM DIGITOS NÃO-ZERO, inverte seus dígitos.
int
exercicio8(int n)
{
   int i = 0;
   while(n != 0)
   {
      i = i * 10;
      i = i + n%10;
      n = n/10;
   }

   return i;
}
