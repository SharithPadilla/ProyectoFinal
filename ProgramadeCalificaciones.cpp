#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

//Hacemos una estructura para almacenar los datos de un estudiante
struct Estudiante {

    string nombre;
    string apellido;
    string apellido2;
    
    int ciclo;
    int cedula;

    vector<float> notas;
    float promedio;

};

//Funcion para validar la entrada de los numeros enteros positivos 
int leerEnteroPositivo(const string& mensaje) {
    int valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (cin.fail() || valor <= 0) {
            cout << "Error: Por favor, ingrese un numero mayor que cero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else {
            return valor;
        }
    }
}
            
 // Funcion para validar nota entre 0 y 100
float leerNotaValida(const string & mensaje){
    float nota;
    while(true){
        cout << mensaje;
        cin >> nota;
        if (cin.fail() || nota < 0.0 || nota > 100.0){
            cout << "Error: La nota debe estar entre 0.0 y 100.0 \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        } else{
            return nota;
        }
    }
}