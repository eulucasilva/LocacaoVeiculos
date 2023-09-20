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
    string data_hora_retirada_prevista;
    string data_hora_entrega_prevista;
};

struct Locacao {
    Cliente cliente;
    Veiculo veiculo;
    string data_hora_retirada;
    string data_hora_entrega;
    bool realizada;
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
    system("pause");
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
    system("pause");
}

void alterarCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    string cpfAlterar;
    bool encontrado = false;
    cout << "Digite o CPF do cliente a ser alterado: ";
    cin >> cpfAlterar;

    for (auto cliente = clientes.begin(); cliente != clientes.end(); cliente++) {
        if (cliente->cpf == cpfAlterar) {
            encontrado = true;
            cout << "Cliente encontrado. Deseja alterar o nome? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo nome: ";
                getline(cin >> ws, cliente->nome);
            }
            cout << "Deseja alterar o CPF? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo CPF: ";
                getline(cin >> ws, cliente->cpf);
            }
            cout << "Deseja alterar a data de nascimento? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data de nascimento: ";
                getline(cin >> ws, cliente->dataNascimento);
            }
            cout << "Deseja alterar a CNH? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova CNH: ";
                getline(cin >> ws, cliente->cnh);
            }
            cout << "Cliente alterado com sucesso!" << endl;
            system("pause");
            return;
        }
    }
    if(!encontrado){
        cout << "Cliente nao encontrado." << endl;
        system("pause");
    }
    
}

void listarClientes(vector<Cliente> &clientes) {
    system("clear||cls");
    if(clientes.empty()){
        cout << "Nao ha clientes cadastrados" << endl;
    }
    else{
        cout << "Lista de Clientes:" << endl;
        for (auto cliente = clientes.begin(); cliente != clientes.end(); cliente++) {
            cout << "Nome: " << cliente->nome << endl;
            cout << "CPF: " << cliente->cpf << endl;
            cout << "Data de Nascimento: " << cliente->dataNascimento << endl;
            cout << "CNH: " << cliente->cnh << endl;
            cout << "---------------------------" << endl;
        }
    }
    
    system("pause");
}

void localizarCliente(vector<Cliente> &clientes) {
    system("clear||cls");
    string cpfLocalizar;
    cout << "Digite o CPF do cliente a ser localizado: ";
    cin >> cpfLocalizar;
    bool encontrado = false;

    for (auto cliente = clientes.begin(); cliente != clientes.end(); cliente++) {
        if (cliente->cpf == cpfLocalizar) {
            encontrado = true;
            cout << "Cliente encontrado:" << endl;
            cout << "Nome: " << cliente->nome << endl;
            cout << "CPF: " << cliente->cpf << endl;
            cout << "Data de Nascimento: " << cliente->dataNascimento << endl;
            cout << "CNH: " << cliente->cnh << endl;
            system("pause");
        }
    }
    if(!encontrado){
        cout << "Cliente nao encontrado" << endl;
    } 
}

void incluirVeiculo(vector<Veiculo>& veiculos) {
    system("clear||cls");
    Veiculo veiculo;
    cout << "Renavam: ";
    getline(cin>> ws, veiculo.renavam);
    cout << "Placa: ";
    getline(cin>> ws, veiculo.placa);
    cout << "Loja de retirada: ";
    getline(cin>> ws, veiculo.lojaRetirada);
    cout << "Data e hora de retirada: ";
    getline(cin >> ws, veiculo.data_hora_retirada_prevista);
    cout << "Data e hora de entrega: ";
    getline(cin >> ws, veiculo.data_hora_entrega_prevista);
    veiculos.push_back(veiculo);
    cout << "Veiculo incluido com sucesso!" << endl;
    system("pause");
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
    system("pause");
}

void alterarVeiculo(vector<Veiculo>& veiculos) {
    system("clear||cls");
    string placa;
    bool encontrado = false;
    cout << "Digite a placa do veiculo que deseja alterar: ";
    cin >> placa;
    for (auto veiculo = veiculos.begin(); veiculo != veiculos.end(); veiculo++) {
        if (veiculo->placa == placa) {
            encontrado = true;
            cout << "Veiculo encontrado. Deseja alterar a placa? (S/N): ";
            char opcao;
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a noca placa: ";
                getline(cin >> ws, veiculo->placa);
            }
            cout << "Deseja alterar o Renavam? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite o novo Renavam: ";
                getline(cin >> ws, veiculo->renavam);
            }
            cout << "Deseja alterar a loja de retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova loja de retirada: ";
                getline(cin >> ws, veiculo->lojaRetirada);
            }
            cout << "Deseja alterar a data/hora de entrega? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data/hora de entrega: ";
                getline(cin >> ws, veiculo->data_hora_entrega_prevista);
            }
            cout << "Deseja alterar a data/hora de retirada? (S/N): ";
            cin >> opcao;
            if (opcao == 'S' || opcao == 's') {
                cout << "Digite a nova data/hora de retirada: ";
                getline(cin >> ws, veiculo->data_hora_retirada_prevista);
            }
            cout << "Dados do veículo alterados com sucesso" << endl;
            return;
        }
    }

    if(!encontrado){
        cout << "Veiculo nao encontrado." << endl;
        system("pause");
    }
}

void listarVeiculos(const vector<Veiculo> &veiculos) {
    system("clear||cls");
    if(veiculos.empty()){
        cout << "Nao ha veiculos cadastrados" << endl;
    }
    else{
         cout << "Lista de veiculos: " << endl;
        for (auto veiculo = veiculos.begin(); veiculo != veiculos.end(); veiculo++) {
            cout << "Renavam: " << veiculo->renavam << endl;
            cout << "Placa: " << veiculo->placa << endl;
            cout << "Loja de retirada: " << veiculo->lojaRetirada << endl;
            cout << "Data e hora de retirada: " << veiculo->data_hora_retirada_prevista << endl;
            cout << "Data e hora de entrega: " << veiculo->data_hora_entrega_prevista << endl;
            cout << "----------------------------------------" << endl;
        }
    }
   
    system("pause");
}


void localizarVeiculo(const vector<Veiculo>& veiculos) {
    system("clear||cls");
    string placa;
    bool encontrado = false;
    cout << "Digite a placa do veiculo que deseja localizar: ";
    cin >> placa;
    for (auto veiculo = veiculos.begin(); veiculo != veiculos.end(); veiculo++) {
        if (veiculo->placa == placa) {
            encontrado = true;
            cout << "Renavam: " << veiculo->renavam << endl;
            cout << "Placa: " << veiculo->placa << endl;
            cout << "Loja de retirada: " << veiculo->lojaRetirada << endl;
            cout << "Data e hora de retirada: " << veiculo->data_hora_retirada_prevista << endl;
            cout << "Data e hora de entrega: " << veiculo->data_hora_entrega_prevista << endl;
            system("pause");
        }
    }
    if(!encontrado){
        cout << "Veiculo nao encontrado." << endl;
        system("pause");
    }
    
}

bool cnhExiste(const string &cnh, vector<Cliente> &clientes) {
    for (auto cli = clientes.begin(); cli != clientes.end(); cli++) {
        if (cli->cnh == cnh) {
            return true;
        }
    }
    return false;
}

bool veiculoExiste(const string& placa, vector<Veiculo> &veiculos) {
    for (auto veiculo = veiculos.begin(); veiculo != veiculos.end(); veiculo++) {
        if (veiculo->placa == placa) {
            return true;
        }
    }
    return false;
}

void incluirLocacao(vector<Locacao> &locacoes, vector<Veiculo> &veiculos, vector<Cliente> &clientes) {
    system("clear||cls");
    Locacao locacao;
    string cpf, placa;
    char opcao;
    cout << "CPF do cliente: ";
    cin >> cpf;
    bool clienteEncontrado = false;
    for (auto cliente = clientes.begin(); cliente != clientes.end(); cliente++) {
        if (cliente->cpf == cpf) {
            locacao.cliente = *cliente;
            clienteEncontrado = true;
            break;
        }
    }
    if (!clienteEncontrado) {
        cout << "Cliente nao encontrado. Se necessario, cadastre no módulo de clientes" << endl;
        return;
    }
    cout << "Placa do veiculo: ";
    cin >> placa;
    bool veiculoEncontrado = false;
    for (auto veiculo = veiculos.begin(); veiculo != veiculos.end(); veiculo++) {
        if (veiculo->placa == placa) {
            locacao.veiculo = *veiculo;
            veiculoEncontrado = true;
            break;
        }
    }
    if (!veiculoEncontrado) {
        cout << "Veiculo nao encontrado. Se necessario, cadastre no módulo de veiculos" << endl;
        return;
    }
    cout << "Data/hora de retirada: ";
    cin >> locacao.data_hora_retirada;
    cout << "Retirada ja aconteceu? (S-Sim / N-Nao): ";
    cin >> opcao;
    if(opcao == 'S' || opcao == 's'){
        locacao.realizada = true;
    }
    else if (opcao == 'N' || opcao == 'n'){
        locacao.realizada = false;
    }
    else{
        cout << "Opcao invalida" << endl;
        return;
    }
    locacoes.push_back(locacao);
    cout << "Locacao registrada com sucesso!" << endl;
    system("pause");
}

void listarLocacao(vector<Locacao> &locacoes){
    system("clear||cls");
    if(locacoes.empty()){
       cout << "Nao ha locacoes de veiculos registrados" << endl;
    }
    else {
        cout << "Lista de locacoes: " << endl;
        for (auto locacao = locacoes.begin(); locacao != locacoes.end(); locacao++) {
            cout << "Cliente: " << locacao->cliente.nome << endl;
            cout << "CNH: " << locacao->cliente.cnh << endl;
            cout << "CPF: " << locacao->cliente.cpf << endl;
            cout << "Placa do veiculo: " << locacao->veiculo.placa << endl;
            cout << "Data e hora de retirada: " << locacao->data_hora_retirada << endl;
            if(locacao->realizada){
                cout << "Retirada realizada! " << endl;
            }
            else{
                cout << "Retirada nao realizada! " << endl;
            }
            cout << "----------------------------------------" << endl;
        }
    }
    
    system("pause");
}

void excluirLocacao(vector<Locacao> &locacoes) {
    string placa;
    cout << "Informe a placa do veiculo para listar as locacoes: ";
    getline(cin >> ws, placa);
    cout << "Locacoes para o veiculo com placa " << placa << ":" << endl;
    int indice = 1;
    for (auto locacao = locacoes.begin(); locacao != locacoes.end(); locacao++) {
        if (locacao->veiculo.placa == placa) {
            cout << indice << ". Cliente " << locacao->cliente.nome << " | Data de retirada: " << locacao->data_hora_retirada << endl;
        }
        indice++;
    }
    int escolha;
    cout << "Informe o numero da locacao a ser excluida: ";
    cin >> escolha;
    if (escolha >= 1 && escolha <= locacoes.size()) {
        locacoes.erase((locacoes.begin() + escolha) - 1);
        cout << "Locacao excluida com sucesso!" << endl;
    } else {
        cout << "Escolha invalida" << endl;
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

void menuLocacao(vector<Locacao> &locacoes, vector<Veiculo> &veiculos, vector<Cliente> &clientes){
    while (true) {
        system("clear||cls");
        int escolha;
        cout << "------ GESTAO DE LOCACOES ------" << endl;
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
                incluirLocacao(locacoes, veiculos, clientes);
                break;
            case 2:
                excluirLocacao(locacoes);
                break;
            case 3:
                //alterarLocacao();
                break;
            case 4:
                listarLocacao(locacoes);
                break;
            case 5:
               // listarLocacao();
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
    vector<Locacao> locacoes;

    int op;
    while (true) {
        system("clear||cls");
        cout << "------- LOCAFINA S/A -------" << endl;
        cout << "1. Gestao de clientes" << endl;
        cout << "2. Gestao de veiculos" << endl;
        cout << "3. Gestao de locacoes" << endl;
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
            case 3:
                menuLocacao(locacoes, veiculos, clientes);
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
