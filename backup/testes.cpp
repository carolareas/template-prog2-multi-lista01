// Definições de teste. Não edite esse arquivo!

#include <tuple>

//#define CATCH_CONFIG_MAIN // define main() automaticamente
#define CATCH_CONFIG_RUNNER // define main() manualmente
#include "catch.hpp"

//
#include "aluno_ex7.hpp" // implementações do aluno
//
#include "aluno_ex8.hpp" // implementações do aluno
//
#include "aluno_ex9.hpp" // implementações do aluno
//
#include "aluno_ex10.hpp" // implementações do aluno
//
#include "aluno_ex11.hpp" // implementações do aluno
//
#include "aluno_ex12.hpp" // implementações do aluno

// =======================
// testes para exercício 0
// -----------------------

TEST_CASE("Ex7", "[lista01]")
{
  REQUIRE(exercicio7(0) == 0);
  REQUIRE(exercicio7(1) == 1);
  REQUIRE(exercicio7(2) == 1);
  REQUIRE(exercicio7(3) == 2);
  REQUIRE(exercicio7(4) == 3);
  REQUIRE(exercicio7(5) == 5);
  REQUIRE(exercicio7(6) == 8);
  REQUIRE(exercicio7(7) == 13);
}

TEST_CASE("Ex8", "[lista01]")
{
  REQUIRE(exercicio8(39) == 93);
  REQUIRE(exercicio8(123) == 321);
  REQUIRE(exercicio8(11) == 11);
}

TEST_CASE("Ex9", "[lista01]")
{
  int v1[] = { 3, 4, 5, 6 };
  REQUIRE(exercicio9(v1, 4) == EnumEx9::PA);
  int v2[] = { 2, 4, 8, 16 };
  REQUIRE(exercicio9(v2, 4) == EnumEx9::PG);
}

TEST_CASE("Ex10", "[lista01]")
{
  REQUIRE(exercicio10(4, 9) == true);
}

TEST_CASE("Ex11", "[lista01]")
{
  int v1[] = { 3, 4, 5, 6 };
  int vout[2];
  exercicio11(v1, 4, vout);
  REQUIRE(vout[0] == 3);
  REQUIRE(vout[1] == 6);
}

TEST_CASE("Ex12", "[lista01]")
{
  int v1[] = { 7, 1, 9, 2, 8, 3 };
  int vout[3];
  exercicio12(v1, 6, vout);
  REQUIRE(vout[0] == 7);
  REQUIRE(vout[1] == 8);
  REQUIRE(vout[2] == 9);
}

// ===============================================================
// Abaixo está o entrypoint "main" para o programa de testes
// POR FAVOR, NÃO EDITE O main()!
// Isso pode desabilitar as rotinas de execução de testes no Catch2
// ================================================================

int
main(int argc, char* argv[])
{
  // Se for editar mesmo assim, por favor edite antes da rotina de execução do Catch2 abaixo...
  //
  int result = Catch::Session().run(argc, argv);
  return result;
}