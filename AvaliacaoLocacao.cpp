#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <cstdio>

using namespace std;

struct Cliente {
    string cpf;
    string nome;
    string dataNasc;
    string cnh;

};

struct Veiculo {
    string renavan;
    string placa;
    string loja_retirada;
};

void menuCliente (){

    vector<Cliente> clientes;
    Cliente novoCliente;
    int op;
    char continuar;

    cout << "---------- GESTAO DE CLIENTES ----------" << endl;
    cout << "1. Incluir" << endl;
    cout << "2. Excluir" << endl;
    cout << "3. Alterar" << endl;
    cout << "4. Listar" << endl;
    cout << "5. Localizar" << endl;
    cout << "0. Sair" << endl;
    cout << "Digite o numero de qualquer opcao para prosseguir: " << endl;
    cin >> op;
    system("clear||cls");

    switch (op) {
    case 1:
        do{
            system("clear||cls");
            cout << "Digite o nome do cliente: " << endl;
            getline(cin >> ws, novoCliente.nome);
            cout << "Digite o cpf do cliente: " << endl;
            getline(cin >> ws, novoCliente.cpf);
            cout << "Digite a data de nascimento do cliente: " << endl;
            getline(cin >> ws, novoCliente.dataNasc);
            cout << "Digite o numero da CNH do cliente: " << endl;
            getline(cin >> ws, novoCliente.cnh);

            clientes.push_back(novoCliente);
            clientes = {};

            cout << "Deseja continuar cadastrando clientes? (S - sim / N - nao)" << endl;
            cin >> continuar;

        }while(continuar=='S' || continuar=='s');
        if(continuar=='N' || continuar=='n'){
            system("clear||cls");
		    menuCliente();
        }

        break;
    case 2:
        break;

    case 3:
        break;
    
    case 4:
        const char ESC=27;
        char opcao;
        cout << "entrou no case 4" << endl;
        for(int i=0; i<clientes.size(); i++){
            cout << "Cliente: " << clientes[i].nome << endl;
            cout << "CPF: " << clientes[i].cpf << endl;
            cout << "Data de nascimento: " << clientes[i].dataNasc << endl;
            cout << "CNH: " << clientes[i].cnh << endl;
            cout << "---------------------------------------------------------" << endl;
        }

        
        break;
    }
    system("clear||cls");
}

int main(){

    menuCliente();



    return 0;
}