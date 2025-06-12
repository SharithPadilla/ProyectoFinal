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
            
 
