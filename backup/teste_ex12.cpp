// Definições de teste. Não edite esse arquivo!

#include <tuple>

//#define CATCH_CONFIG_MAIN // define main() automaticamente
#define CATCH_CONFIG_RUNNER // define main() manualmente
#include "catch.hpp"

//
#include "aluno_ex12.hpp" // implementações do aluno

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