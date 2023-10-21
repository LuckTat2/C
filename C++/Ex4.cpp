#include <iostream>
#include <string>
class humano {
    public:
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
        void Aniversario(){
            idade++;
            std::cout << nome << " agora tem a idade de " << idade << " anos. \n";
        }
    private:
        std::string nome;
        int idade;
        float peso;
};
int main(int argc, char** argv){

    humano lucas("Lucas", 26, 69.5);
    for (int i=0; i<10; i++){
        lucas.MostrarDados();
        lucas.Aniversario();
    }

    system ("pause");
    return 0;
}