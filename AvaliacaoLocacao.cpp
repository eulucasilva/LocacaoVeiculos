#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;
struct Cliente {
    string nome;
    string cpf;
    string dataNascimento;
    string cnh;
};

struct Veiculo {
    string renavam;
    string placa;
    string lojaRetirada;
    string dataHoraRetirada;
    string dataHoraEntrega;
};

void incluirCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    Cliente cliente;
    cout << "Digite o nome do cliente: ";
    getline(cin >> ws, cliente.nome);
    cout << "Digite o CPF do cliente: ";
    getline(cin >> ws, cliente.cpf);
    cout << "Digite a data de nascimento do cliente: ";
    getline(cin >> ws, cliente.dataNascimento);
    cout << "Digite a CNH do cliente: ";
    getline(cin >> ws, cliente.cnh);
    clientes.push_back(cliente);
    cout << "Cliente incluido com sucesso!" << endl;
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}

void excluirCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    string cpfExcluir;
    cout << "Digite o CPF do cliente a ser excluido: ";
    cin >> cpfExcluir;

    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        if (it->cpf == cpfExcluir) {
            clientes.erase(it);
            cout << "Cliente excluido com sucesso!" << endl;
            return;
        }
    }
    cout << "Cliente não encontrado." << endl;
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}

void alterarCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    string cpfAlterar;
    bool encontrado = false;
    cout << "Digite o CPF do cliente a ser alterado: ";
    cin >> cpfAlterar;

    for (auto &cliente : clientes) {
        if (cliente.cpf == cpfAlterar) {
            encontrado = true;
            cout << "Cliente encontrado. Deseja alterar o nome? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo nome: ";
                getline(cin >> ws, cliente.nome);
            }
            cout << "Deseja alterar o CPF? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo CPF: ";
                getline(cin >> ws, cliente.cpf);
            }
            cout << "Deseja alterar a data de nascimento? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data de nascimento: ";
                getline(cin >> ws, cliente.dataNascimento);
            }
            cout << "Deseja alterar a CNH? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova CNH: ";
                getline(cin >> ws, cliente.cnh);
            }
            cout << "Cliente alterado com sucesso!" << endl;
            cout << "Tecle ENTER para continuar...";
            cin.ignore();
            return;
        }
    }
    if(!encontrado){
        cout << "Cliente nao encontrado." << endl;
        cout << "Tecle ENTER para continuar...";
        cin.ignore();
    }
    
}

void listarClientes(vector<Cliente> &clientes) {
    system("clear||cls");
    cout << "Lista de Clientes:" << endl;
    for (const auto &cliente : clientes) {
        cout << "Nome: " << cliente.nome << endl;
        cout << "CPF: " << cliente.cpf << endl;
        cout << "Data de Nascimento: " << cliente.dataNascimento << endl;
        cout << "CNH: " << cliente.cnh << endl;
        cout << "---------------------------" << endl;
    }
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}

void localizarCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    string cpfLocalizar;
    cout << "Digite o CPF do cliente a ser localizado: ";
    cin >> cpfLocalizar;
    bool encontrado = false;

    for (const auto &cliente : clientes) {
        if (cliente.cpf == cpfLocalizar) {
            encontrado = true;
            cout << "Cliente encontrado:" << endl;
            cout << "Nome: " << cliente.nome << endl;
            cout << "CPF: " << cliente.cpf << endl;
            cout << "Data de Nascimento: " << cliente.dataNascimento << endl;
            cout << "CNH: " << cliente.cnh << endl;
            cout << "Tecle ENTER para continuar...";
            cin.ignore();
        }
    }
    if(!encontrado){
        cout << "Cliente nao encontrado." << endl;
    } 
}

void incluirVeiculo(vector<Veiculo>& veiculos) {
    system("clear||cls");
    Veiculo veiculo;
    cout << "Renavam: ";
    getline(cin>> ws, veiculo.renavam);
    cout << "Placa: ";
    getline(cin>> ws, veiculo.placa);
    cout << "Loja de Retirada: ";
    getline(cin>> ws, veiculo.lojaRetirada);
    cout << "Data e Hora de Retirada: ";
    getline(cin >> ws, veiculo.dataHoraRetirada);
    cout << "Data e Hora de Entrega: ";
    getline(cin >> ws, veiculo.dataHoraEntrega);
    veiculos.push_back(veiculo);
    cout << "Veiculo incluido com sucesso!" << endl;
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}

void excluirVeiculo(vector<Veiculo>& veiculos) {
    system("clear||cls");
    string placa;
    cout << "Digite a placa do veiculo que deseja excluir: ";
    cin >> placa;
    for (auto it = veiculos.begin(); it != veiculos.end(); ++it) {
        if (it->placa == placa) {
            veiculos.erase(it);
            cout << "Veículo excluido com sucesso!" << endl;
            return;
        }
    }
    cout << "Veiculo nao encontrado." << endl;
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}

void alterarVeiculo(vector<Veiculo>& veiculos) {
    system("clear||cls");
    string placa;
    bool encontrado = false;
    cout << "Digite a placa do veiculo que deseja alterar: ";
    cin >> placa;
    for (auto& veiculo : veiculos) {
        if (veiculo.placa == placa) {
            encontrado = true;
            cout << "Veiculo encontrado. Deseja alterar a placa? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a noca placa: ";
                getline(cin >> ws, veiculo.placa);
            }
            cout << "Deseja alterar o Renavam? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo Renavam: ";
                getline(cin >> ws, veiculo.renavam);
            }
            cout << "Deseja alterar a loja de retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova loja de retirada: ";
                getline(cin >> ws, veiculo.lojaRetirada);
            }
            cout << "Deseja alterar a data/hora de entrega? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data/hora de entrega: ";
                getline(cin >> ws, veiculo.dataHoraEntrega);
            }
            cout << "Deseja alterar a data/hora de retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data/hora de retirada: ";
                getline(cin >> ws, veiculo.dataHoraRetirada);
            }
            cout << "Dados do veículo alterados com sucesso" << endl;
            return;
        }
    }

    if(!encontrado){
        cout << "Veiculo nao encontrado." << endl;
        cout << "Tecle ENTER para continuar...";
        cin.ignore();
    }
}

void listarVeiculos(const vector<Veiculo> &veiculos) {
    system("clear||cls");
    cout << "Lista de Veículos: " << endl;
    for (const auto& veiculo : veiculos) {
        cout << "Renavam: " << veiculo.renavam << "\n";
        cout << "Placa: " << veiculo.placa << "\n";
        cout << "Loja de Retirada: " << veiculo.lojaRetirada << "\n";
        cout << "Data e Hora de Retirada: " << veiculo.dataHoraRetirada << "\n";
        cout << "Data e Hora de Entrega: " << veiculo.dataHoraEntrega << "\n";
        cout << "----------------------------------------\n";
    }
    cout << "Tecle ENTER para continuar...";
    cin.ignore();
}


void localizarVeiculo(const vector<Veiculo>& veiculos) {
    system("clear||cls");
    string placa;
    bool encontrado = false;
    cout << "Digite a placa do veiculo que deseja localizar: ";
    cin >> placa;
    for (const auto& veiculo : veiculos) {
        if (veiculo.placa == placa) {
            encontrado = true;
            cout << "Renavam: " << veiculo.renavam << endl;
            cout << "Placa: " << veiculo.placa << endl;
            cout << "Loja de Retirada: " << veiculo.lojaRetirada << endl;
            cout << "Data e Hora de Retirada: " << veiculo.dataHoraRetirada << endl;
            cout << "Data e Hora de Entrega: " << veiculo.dataHoraEntrega << endl;
            cout << "Tecle ENTER para continuar...";
            cin.ignore();
        }
    }
    if(!encontrado){
        cout << "Veiculo nao encontrado." << endl;
        cout << "Tecle ENTER para continuar...";
        cin.ignore();
    }
    
}

void menuVeiculos (vector<Veiculo> &veiculos){
    while (true) {
        system("clear||cls");
        int escolha;
        cout << "------ GESTAO DE VEICULOS ------" << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Alterar" << endl;
        cout << "4. Listar" << endl;
        cout << "5. Localizar" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                incluirVeiculo(veiculos);
                break;
            case 2:
                excluirVeiculo(veiculos);
                break;
            case 3:
                alterarVeiculo(veiculos);
                break;
            case 4:
                listarVeiculos(veiculos);
                break;
            case 5:
                localizarVeiculo(veiculos);
                break;
            case 0:
                cout << "Retornando ao menu principal." << endl;
                system("clear||cls");
                return;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
        system("clear||cls");
    }
}

void menuClientes(vector<Cliente> &clientes){
    while (true) {
        system("clear||cls");
        int escolha;
        cout << "------ GESTAO DE CLIENTES ------" << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Alterar" << endl;
        cout << "4. Listar" << endl;
        cout << "5. Localizar" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                incluirCliente(clientes);
                break;
            case 2:
                excluirCliente(clientes);
                break;
            case 3:
                alterarCliente(clientes);
                break;
            case 4:
                listarClientes(clientes);
                break;
            case 5:
                localizarCliente(clientes);
                break;
            case 0:
                cout << "Retornando ao menu principal." << endl;
                system("clear||cls");
                return;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    }
}

int main() {

    vector<Cliente> clientes; 
    vector<Veiculo> veiculos;

    int op;
    while (true) {
        system("clear||cls");
        cout << "------- LOCAFINA S/A -------" << endl;
        cout << "1. Gestao de clientes" << endl;
        cout << "2. Gestao de veiculos" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;

        switch (op) {
            case 1:
                menuClientes(clientes);
                break;
            case 2:
                menuVeiculos(veiculos);
                break;
            case 0:
                cout << "Saindo do programa..." << endl;
                system("clear||cls");
                return 0;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    }    

    return 0;
}
