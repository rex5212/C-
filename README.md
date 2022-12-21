# CppProject

#include <iomanip> // Forma o numero de casas decimais
#include <string> // Gerencia variavel de texto
#include <iostream> // input and output

#include <bits/stdc++.h> // Biblioteca universal!!! 

using namespace std;

int main()
{
    string nome;
    int idade;
    double altura;
    char genero;
    int N;
    int numero;
    
    N = 0;
    idade = 18;
    altura = 1.65326;
    
    cout << "Digite seu nome: ";
    getline(cin, nome); // codigo para lê uma string, com o getline não e preciso limpa a linha depois dele,  mas apenas o getline
    cout << "Digite seu genero: ";
    cin >> genero;
    // cin.ignore(INT_MAX, '\n') Limpa o input

    cout << fixed << setprecision(2); // Formatação de ponto futuante
    // cout << ____; = printf("")
    cout << "Ola, meu nome é " << nome << "," << endl;
    // cout << _____ << endl; -> endl; = \n pode usar um ou o outro
    cout << "eu tenho " << idade << " anos e " << altura << " metros" << "," << endl;
    cout << "e meu sexo é " << genero << "." << endl;
    
    int vet[3];
    
    while(N < 3){
        cout << "Digite o numero que voce que coloca no vetor, e para sair do mesmo coloque 0: ";
        cin >> numero;
        vet[N] = numero;
        N++;
    }
    
    cout << "Seu vetor ficou: " << endl;
    
    for(int i = 0; i < 3; i++){
        if(i == 2){
            cout << vet[i];
        } else {
            cout << vet[i] << ", ";
        }
    }
    
    return 0;
}

















#include <bits/stdc++.h> // Biblioteca universal!!! 

using namespace std;

// fazer o problema tempo base com a adição de pode escolhe se vai se de segundos || minutos para horas ou dia (ai tem o de horas tambem) !! e o inverso !! - não completado...

int main()
{
    string opcao, transformacao;
    // problema tempo
    
    int horas, minutos, segundos, dia, mes, semanas, ano, minutosT, resto;
    // levando mes como tendo 30 dias
    
    cout << "Escolha qual o tipo de dado que ira se transformado: ";
    getline(cin, opcao);
    
    if(opcao == "segundos"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        cout << "Quanto segundos voce que transformar: ";
        cin >> segundos;
        if(transformacao == "segundos"){
            cout << "Deu " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            if(segundos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 60 segundos: " <<  segundos << " Segundos";
            } else {
                minutos = segundos / 60;
                segundos = segundos % 60;
                cout << "Deu " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "horas"){
            if(segundos < 3600){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 3600 segundos: " <<  segundos << " Segundos";
            } else {
                horas = segundos / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                segundos = resto % 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if (transformacao == "dia"){
            if(segundos < 86400){
                cout << "Não da para transforma para dias, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 86400 segundos: " <<  segundos << " Segundos";
            } else {
                dia = segundos / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 604800){
                cout << "Não da para transforma para semanas, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 604800 segundos: " <<  segundos << " Segundos";
            } else {
                semanas = segundos / 604800;
                resto = segundos % 604800;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "mes"){
            if(segundos < 2592000){
                cout << "Não da para transforma para mes, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 2592000 (quando o mesmo for de 30 dias) segundos: " <<  segundos << " Segundos";
            } else {
                mes = segundos / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }        
        } else if(transformacao == "ano"){
            if(segundos < 31104000){
                cout << "Não da para transforma para ano, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 31104000 segundos: " <<  segundos << " Segundos";
            } else {
                ano = segundos / 31104000;
                resto = segundos % 31104000;
                mes = resto / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }        
        }
    }

/*    
    if(opcao == "minutos"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        cout << "Quanto minutos voce que transformar: ";
        cin >> minutos;
        if(transformacao == "segundos"){
            segundos = minutos * 60;
            cout << "Dei " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            cout << "Deu " << minutos << " Minutos";
        } else if(transformacao == "horas"){
            if(minutos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 60 minutos: " <<  minutos << " Minutos";
            } else {
                horas = minutos / 60;
                minutos = minutos % 60;
                resto = minutos % 60;
                segundos = resto / 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if (transformacao == "dia"){
            if(segundos < 1440){
                cout << "Não da para transforma para dias, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 1440 minutos: " <<  minutos << " Minutos";
            } else {
                dia = minutos / 1440;
                resto = minutos % 1440;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 604800){
                cout << "Não da para transforma para semanas, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 604800 segundos: " <<  minutos << " Minutos";
            } else {
                semanas = segundos / 604800;
                resto = segundos % 604800;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "mes"){
            if(segundos < 2592000){
                cout << "Não da para transforma para mes, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 2592000 (quando o mesmo for de 30 dias) segundos: " <<  segundos << " Segundos";
            } else {
                mes = segundos / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }        
        } else if(transformacao == "ano"){
            if(segundos < 31104000){
                cout << "Não da para transforma para ano, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 31104000 segundos: " <<  segundos << " Segundos";
            } else {
                ano = segundos / 31104000;
                resto = segundos % 31104000;
                mes = resto / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        }
    }
*/ 
    
    return 0;
}





#include <bits/stdc++.h> // Biblioteca universal!!! 

using namespace std;

// fazer o problema pagamento base e adiciona a verificação de horas trabalhadas (para fica mais exato coloca com segundos)

int main()
{
    
    string nome;
    
    int opcao, horas, minutos, segundos;
    
    cout << "Escreva qual o seu nome: ";
    getline(cin, nome);
    
    cout << "Selecione seu cargo: " << endl << "1 - Estagiario\n2 - Coordenador\n3 - Tercerizado\n4 - Diretor" << endl;
    cin >> opcao;
    
    switch(opcao){
        case 1: 
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            cout << "Quantos minutos voce trabalhou: ";
            cin >> minutos;
            cout << "Quantos segundos voce trabalhou: ";
            cin >> segundos;
            if(horas > 660){
                pagamento = salario;
            }
            if(horas < 660){
                horasF = 660 - horas;
                minutosF = 60 - minutos;
                segundosF = 60 - segundos;
                pagamento = salario - (horasF * salario) / horas;
                cout << "Falta " << horas << ":" << minutos << ":" << segundos << " para comprir a carga horaria mensal" << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
        case 2: 
            cout << "Coordenador";
                break;
        case 3: 
            cout << "Tercerizado";
                break;
        case 4: 
            cout << "Diretor";
                break;
    }
    
    return 0;
}
