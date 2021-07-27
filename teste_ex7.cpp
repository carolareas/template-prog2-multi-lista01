// Definições de teste. Não edite esse arquivo!

#include <tuple>

//#define CATCH_CONFIG_MAIN // define main() automaticamente
#define CATCH_CONFIG_RUNNER // define main() manualmente
#include "catch.hpp"

//
#include "aluno_ex7.hpp" // implementações do aluno

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