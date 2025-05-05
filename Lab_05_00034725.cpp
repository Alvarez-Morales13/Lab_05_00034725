#include <iostream>
using namespace std;


int main(){
    //Declaración de las variables
    double numero1,numero2;
    int numero,resultado;

    cout << "Seleccionar un numero: " << endl << endl; 
    cout << "1. Sumar dos numeros. " << endl << endl;
    cout << "2. Restar dos numeros. " << endl << endl;
    cout << "3. Multiplicar dos numeros. " << endl << endl;
    cout << "4. Dividir dos numeros. " << endl << endl;
    cout << "5. Salir " << endl << endl;
    cin >> numero;
    
    //Inicio del switch
    switch (numero)
    {
    case 1:
    //Suma de dos números
        cout << "Ingrese primer numero: " << endl;
        cin >> numero1;
        cout << "Ingrese segundo numero: " << endl;
        cin >> numero2;
        resultado = numero1 + numero2;
        break;

    case 2:
    //Resta de dos números
        cout << "Ingrese primer numero: " << endl;
        cin >> numero1;
        cout << "Ingrese segundo numero: " << endl;
        cin >> numero2;
        resultado = numero1 - numero2;
        break;

    case 3:
    //Multiplicación de dos números
        cout << "Ingrese primer numero: " << endl;
        cin >> numero1;
        cout << "Ingrese segundo numero: " << endl;
        cin >> numero2;
        resultado = numero1 * numero2;
        break;

    case 4:
    //División de dos números
        cout << "Ingrese primer numero: " << endl;
        cin >> numero1;
        cout << "Ingrese segundo numero: " << endl;
        cin >> numero2;
        if(numero2 == 0){
            cout << "No se puede dividir entre 0, elige otro numero"; 
            return 0;
        }
        else{
            resultado = numero1 / numero2;
        }
        break;
    
    case 5:
    //Salir
        cout << "Adios, muchas gracias";
        return 0;

    default:
    //Numero incorrecto de las opciones que hay
        cout << "Error, numero no valido";
        return 0;
    }
    
    cout << "Su resultado es: " << resultado << endl;

    return 0;
}