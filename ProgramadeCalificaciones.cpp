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
