#include <iostream>
#include <string>

struct humano {
    humano(){
        nome = "Nome"; //this-> é opcional
        idade = 0;
        peso = 0.5f;
    }
    humano(std::string n, int i=0, float p=0.5f){
        nome = n;
        idade = i;
        peso = p;
    }
    void MostrarDados(){
        std::cout << "Nome: " << nome << "\n";
        std::cout << "Idade: " << idade << "\n";
        std::cout << "Peso: " << peso << "\n";
    }
    std::string nome;
    int idade;
    float peso;
};

int main(int argc, char** argv){
    humano eu("Lucas", 26, 69.5);
    humano jose("Jose", 48, 78.6);
    eu.MostrarDados();
    std::cout << "\n";
    jose.MostrarDados();
    
    system ("pause");
    return 0;
}