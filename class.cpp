#include <iostream>
#include <string>
using namespace std;

// Classe base Pessoa
class Pessoa {
public:
    string nome;
    int idade;

    Pessoa(string n, int i) : nome(n), idade(i) {}

    void imprimeNome() {
        cout << "O nome é: " << nome << endl;
    }

    virtual void imprimeIdade() {
        cout << "Idade da pessoa: " << idade << " anos" << endl;
    }
};

// Classe Professor que herda de Pessoa
class Professor : public Pessoa {
public:
    Professor(string n, int i) : Pessoa(n, i) {}

    void imprimeIdade() override {
        cout << "Idade do professor: " << idade << " anos" << endl;
    }
};

// Classe Aluno que herda de Pessoa
class Aluno : public Pessoa {
private:
    int matricula;

public:
    Aluno(string n, int i, int m) : Pessoa(n, i), matricula(m) {}

    void imprimeIdade() override {
        cout << "Idade do aluno: " << idade << " anos" << endl;
    }

    void imprimeMatricula() {
        cout << "A matrícula do aluno é: " << matricula << endl;
    }
};

// Função principal
int main() {
    // Criação dos objetos
    Aluno aluno("João", 20, 12345);
    Professor professor("Maria", 45);
    Pessoa pessoa("Carlos", 30);

    // Imprime métodos e atributos de cada classe
    aluno.imprimeNome();
    aluno.imprimeIdade();
    aluno.imprimeMatricula();

    professor.imprimeNome();
    professor.imprimeIdade();

    pessoa.imprimeNome();
    pessoa.imprimeIdade();

    return 0;
}
