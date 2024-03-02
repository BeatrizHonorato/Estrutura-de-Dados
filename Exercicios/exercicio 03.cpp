#include <iostream>
using namespace std;

/* Desenvolva uma aplicação para cadastrar os professores da FATEC*/

struct cadastro{
	string nome;
	string disciplina;
	int qtd_reprova;
	int aulas_semana;
};

string Nome_professor();
string Disciplina_professor();
int Qtd_reprova_aluno();
int Aulas_semanais_faculdade();


int main() {
	
	struct cadastro vetor_professor;
	
	vetor_professor.nome = Nome_professor();
	vetor_professor.disciplina = Disciplina_professor();
	vetor_professor.aulas_semana = Aulas_semanais_faculdade();
	vetor_professor.qtd_reprova = Qtd_reprova_aluno();
	
	cout << "Professor: " << vetor_professor.nome << endl;
	cout << "Disciplina: " << vetor_professor.disciplina << endl;
	cout << "Aulas Semanais:  " << vetor_professor.aulas_semana << endl;
	cout << "Reprova de aluno no semestre: " << vetor_professor.qtd_reprova << endl;
	
	return 0;
}

string Nome_professor(){
	string nome;
	cout << "Insira o nome: " << endl;
	cin >> nome;
	return nome;
}

string Disciplina_professor(){
	string disciplina;
	cout << "Insira a disciplina: " << endl;
	cin >> disciplina;
	return disciplina;
}

int Qtd_reprova_aluno(){
	int reprova;
	cout << "Insira a quantidade de aluno que reprovou: " << endl;
	cin >> reprova;
	return reprova;
}

int Aulas_semanais_faculdade(){
	int aulas;
	cout << "Insira a quantidade de aulas semanais: " << endl;
	cin >> aulas;
	return aulas;
}