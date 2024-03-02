#include <iostream>
using namespace std;

/*Desenvolva uma apliação para cadastrar carro.Insira na estrutura informações pertinentes do carro*/

struct cadastro {
    string Modelo;
    int Ano;
    int qtd_portas;
    float velocidade;
};

string modelo_carro();
int ano_carro();
int qtd_portas_carro();
float velocidade_carro();

int main() {
    struct cadastro vetor_carros;

    vetor_carros.Modelo = modelo_carro();
    vetor_carros.Ano = ano_carro();
    vetor_carros.qtd_portas = qtd_portas_carro();
    vetor_carros.velocidade = velocidade_carro();

    cout << "Modelo: " << vetor_carros.Modelo << endl;
    cout << "Ano: " << vetor_carros.Ano << endl;
    cout << "Quantidade de portas: " << vetor_carros.qtd_portas << endl;
    cout << "Velocidade: " << vetor_carros.velocidade << endl;

    return 0;
}

string modelo_carro() {
    string modelo;
    cout << "Insira o modelo do carro: " << endl;
    cin >> modelo;
    return modelo;
}

int ano_carro() {
    int ano;
    cout << "Insira o ano do carro: " << endl;
    cin >> ano;
    return ano;
}

int qtd_portas_carro() {
    int portas;
    cout << "Insira a quantidade de portas: " << endl;
    cin >> portas;
    return portas;
}

float velocidade_carro() {
    float velocidade;
    cout << "Insira a velocidade: " << endl;
    cin >> velocidade;
    return velocidade;
}
