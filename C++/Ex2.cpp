#include <iostream>
#include <string>

void printTest(int& x){ //Para a alteração de variável dentro do escopo dessa função alterar a variável no escopo de outra função que está fazendo uma chamada, é preciso usar o & após int nos argumentos da função, porém é preciso declarar a variável antes de chamar ela nos parametros da chamada.
    x += 1;
    std::cout << x << (" foi o teste! \n");
}

int soma(int x, int y){
    return x+y;
}
int main(int argc, char** argv){
int x = 10;
int y = 20;
int z = soma(x, y);

std::cout << z << " e o resultado da soma de " << x << " e " << y << "\n";

printTest(x);
printTest(y);

system ("pause");
return 0;
}