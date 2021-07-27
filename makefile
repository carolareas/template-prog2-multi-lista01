all: clean test

# testes individuais

appTesteEx7: teste_ex7.cpp
	g++ --std=c++17 $< -o $@

appTesteEx8: teste_ex8.cpp
	g++ --std=c++17 $< -o $@

appTesteEx9: teste_ex9.cpp
	g++ --std=c++17 $< -o $@

appTesteEx10: teste_ex10.cpp
	g++ --std=c++17 $< -o $@

appTesteEx11: teste_ex11.cpp
	g++ --std=c++17 $< -o $@

appTesteEx12: teste_ex12.cpp
	g++ --std=c++17 $< -o $@

# Todos testes juntos!

appTestes: testes.cpp
	g++ --std=c++17 $< -o $@

test: appTestes
	# executa todos os testes
	./appTestes

clean:
	rm -f appTestes
