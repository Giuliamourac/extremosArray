#include <iostream>
using namespace std;

int maior(int lista[], int tam);
int menor(int lista[], int tam);

int main()
{
    // 01. Escreva um programa que vai receber e armazenar 10 números em um array. Em seguida, você deve criar duas funções que vão achar o maior e o menor valor desse array

    const int tamanho = 10;
    int lista[tamanho];

    cout << "Digite 10 valores para serem alocados em uma array:" << endl;

    for(int i = 0; i < tamanho; i++)
    {
        cin >> lista[i];
    }

    // cout << "Os valores digitados foram: " << endl;

    // for(int i = 0; i < tamanho; i++)
    // {
    //     cout << lista[i] << endl;
    // }

    cout << "O maior numero e: " << maior(lista, tamanho) << " e o menor e: " << menor(lista, tamanho);
}

int maior(int lista[], int tam)
{
    int maior = lista[0];

    for(int i = 0; i < tam; i ++)
    {
        if(maior < lista[i])
        {
            maior = lista[i];
        }
    }
    
    return maior;
}
 int menor(int lista[], int tam)
 {
    int menor = lista[0];

    for(int i = 0; i < tam; i ++)
    {
        if(menor > lista[i])
        {
            menor = lista[i];
        }
    }

    return menor;
 }