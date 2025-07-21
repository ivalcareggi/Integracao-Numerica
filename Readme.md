Calculadora de Integrais Numéricas em C
Este projeto consiste em uma coleção de programas em C, cada um implementando um método diferente de integração numérica para calcular o valor aproximado de uma integral definida. É um material de estudo prático para a disciplina de Cálculo Numérico.

Para compilar e executar os programas deste projeto, você precisará de um compilador C, como o GCC (GNU Compiler Collection), que é padrão na maioria dos sistemas Linux e pode ser facilmente instalado no Windows (via MinGW ou WSL) ou no macOS (via Xcode Command Line Tools).

# 1. Compilando
Para compilar, basta abrir seu terminal e digiar: 
* gcc -o <nome_do_executavel> <nome_do_arquivo.c>


### Para a regra dos trapézios:
gcc -o trapezio Integral-Trapezios.c -lm

### Para a Regra de 1/3 de Simpson:
gcc -o simpsonum Integral-simpson-um-terco.c -lm

### Para a Regra de 3/8 de Simpson:
gcc -o simpsontres Integral-simpson-tres-oitavo.c -lm

### Para a Soma de Riemann:
gcc -o riemann integral-riemann.c -lm

# 2. Execução
Com os executáveis prontos, basta digitar ./nomedoexecutavel

### Executar o programa da Regra de Riemann:
./integral-riemann

### Executar o programa da Regra dos Trapézios:
./trapezio

### Executar o programa da Regra de 1/3 de Simpson:
./simpsonum

### Executar o programa da Regra de 3/8 de Simpson:
./simpsontres
