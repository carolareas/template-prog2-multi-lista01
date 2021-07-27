// Definições de teste. Não edite esse arquivo!

#include <tuple>

//#define CATCH_CONFIG_MAIN // define main() automaticamente
#define CATCH_CONFIG_RUNNER // define main() manualmente
#include "catch.hpp"

//
#include "aluno_ex9.hpp" // implementações do aluno

TEST_CASE("Ex9", "[lista01]")
{
  int v1[] = { 3, 4, 5, 6 };
  REQUIRE(exercicio9(v1, 4) == EnumEx9::PA);
  int v2[] = { 2, 4, 8, 16 };
  REQUIRE(exercicio9(v2, 4) == EnumEx9::PG);
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