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
  return Outro; // PA ou PG
}
