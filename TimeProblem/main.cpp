#include <bits/stdc++.h>

using namespace std;

// fazer o problema tempo base com a adição de pode escolhe se vai se de segundos || minutos para horas ou dia (ai tem o de horas tambem) !! e o inverso !! - continua a parte de dia transformação

int main()
{
    string opcao, transformacao;
    // problema tempo

    int horas, minutos, segundos, dia, mes, semanas, ano, minutosT, resto;
    // levando mes como tendo 30 dias

    cout << "Escolha qual o tipo de dado que ira se transformado: " << endl;
    //cout << "Versao 0.8, por enquanto esta fixo em segundo" << endl;
    getline(cin, opcao);
    //opcao = "horas";

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


    if(opcao == "minutos"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        //transformacao = "dia";
        cout << "Quanto minutos voce que transformar: ";
        cin >> minutos;
        //minutos = 1550;
        if(transformacao == "segundos"){
            segundos = minutos * 60;
            cout << "Deu " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            cout << "Deu " << minutos << " Minutos";
        } else if(transformacao == "horas"){
            if(minutos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 60 minutos: " <<  minutos << " Minutos";
            } else {
                horas = minutos / 60;
                minutos = minutos % 60;
                resto = minutos % 60;
                segundos = resto / 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos";
            }
        } else if (transformacao == "dia"){
            if(minutos < 1440){
                cout << "Não da para transforma para dias, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 1440 minutos: " <<  minutos << " Minutos";
            } else {
                dia = minutos / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 10080){
                cout << "Não da para transforma para semanas, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 10080 minutos: " <<  minutos << " Minutos";
            } else {
                semanas = minutos / 10080;
                resto = minutos % 10080;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << "Minutos";
            }
        } else if(transformacao == "mes"){
            if(minutos < 43200){
                cout << "Não da para transforma para mes, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 43200 (quando o mesmo for de 30 dias) Minutos: " <<  minutos << " Minutos";
            } else {
                mes = minutos / 43200;
                resto = minutos % 43200;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos";
            }
        } else if(transformacao == "ano"){
            if(minutos < 518400){
                cout << "Não da para transforma para ano, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 518400 Minutos: " <<  minutos << " Minutos";
            } else {
                ano = minutos / 518400;
                resto = minutos % 518400;
                mes = resto / 43200;
                resto = minutos % 43200;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos";
            }
        }
    }

    if(opcao == "horas"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        //transformacao = "ano";
        cout << "Quantas horas voce que transformar: ";
        cin >> horas;
        horas = 18296;
        if(transformacao == "segundos"){
            segundos = horas * 3600;
            cout << "Deu " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            minutos = horas * 60;
            cout << "Deu " << minutos << " Minutos";
        } else if(transformacao == "horas"){
            cout << "Deu " << horas << " Horas";
        } else if (transformacao == "dia"){
            if(horas < 24){
                cout << "Não da para transforma para dia, ja que a quantidade de horas e insuficiente, necessita de pelo menos 24 horas: " <<  horas << " Horas";
            } else {
                dia = horas / 24;
                horas = horas % 24;
                cout << "Deu " << dia << " Dias, " << horas << " Horas";
            }
        } else if(transformacao == "semana"){
            if(horas < 168){
                cout << "Não da para transforma para semanas, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 168 horas: " <<  horas << " Horas";
            } else {
                semanas = horas / 168;
                resto = horas % 168;
                dia = resto / 24;
                horas = resto % 24;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas";
            }
        } else if(transformacao == "mes"){
            if(horas < 720){
                cout << "Não da para transforma para mes, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 720 (quando o mesmo for de 30 dias) Horas: " <<  horas << " Horas";
            } else {
                mes = horas / 720;
                resto = horas % 720;
                dia = resto / 24;
                horas = resto % 24;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas";
            }
        } else if(transformacao == "ano"){
            if(horas < 8760){
                cout << "Não da para transforma para ano, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 8760 Horas: " <<  horas << " Horas";
            } else {
                ano = horas / 8760;
                resto = horas % 8760;
                mes = resto / 720;
                resto = horas % 720;
                dia = resto / 24;
                horas = resto % 24;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas";
            }
        }
    }

    if(opcao == "dia"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        //transformacao = "dia";
        cout << "Quantas dia voce que transformar: ";
        cin >> dia;
        //minutos = 1550;
        if(transformacao == "segundos"){
            segundos = horas * 3600;
            cout << "Deu " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            cout << "Deu " << minutos << " Minutos";
        } else if(transformacao == "horas"){
            if(minutos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 60 minutos: " <<  minutos << " Minutos";
            } else {
                horas = minutos / 60;
                minutos = minutos % 60;
                resto = minutos % 60;
                segundos = resto / 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos";
            }
        } else if (transformacao == "dia"){
            if(minutos < 1440){
                cout << "Não da para transforma para dias, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 1440 minutos: " <<  minutos << " Minutos";
            } else {
                dia = minutos / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 10080){
                cout << "Não da para transforma para semanas, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 10080 minutos: " <<  minutos << " Minutos";
            } else {
                semanas = minutos / 10080;
                resto = minutos % 10080;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << "Minutos";
            }
        } else if(transformacao == "mes"){
            if(minutos < 43200){
                cout << "Não da para transforma para mes, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 43200 (quando o mesmo for de 30 dias) Minutos: " <<  minutos << " Minutos";
            } else {
                mes = minutos / 43200;
                resto = minutos % 43200;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos";
            }
        } else if(transformacao == "ano"){
            if(minutos < 518400){
                cout << "Não da para transforma para ano, ja que a quantidade de minutos e insuficiente, necessita de pelo menos 518400 Minutos: " <<  minutos << " Minutos";
            } else {
                ano = minutos / 518400;
                resto = minutos % 518400;
                mes = resto / 43200;
                resto = minutos % 43200;
                dia = resto / 1440;
                resto = minutos % 1440;
                horas = resto / 60;
                minutos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos";
            }
        }
    }


    return 0;
}
