#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

struct Alumno {
    string nombre;
    string primerApellido;
    string segundoApellido;
    int ciclo;
    int cedula;
    vector<float> notas;
    float promedio;
    string estado;

};

bool Validarentrada (string mensaje){
    int Valor;

    while (true){
        cout << mensaje;
        cin >> Valor;
        if (cin.fail() || Valor <=0){ //cin.fail()  verifica si la entrada falló 

        cout << "Error: Ingrese un número entero positivo.\n";

        //limpian el cin
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return Valor;
        }
    }

}

float ValidarNota (string mensaje){
    float Nota;
    while (true){
        cout << mensaje;
        cin >> Nota;
        if (cin.fail() || Nota < 0 || Nota > 100) {
            
        cout << "Error: La nota debe ser entre 0 y 100.\n";

        cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } else{
            return Nota;
        }
    }
}

int main (){
    int filas;
    int columnas =5;

    cout << "========================================" << endl;
    cout << "Bienvenido al sistema de evaluacion de alumnos" << endl;
    cout << "========================================" << endl;
    cout << "¿Cuantos alumnos desea evaluar?" << endl;
    cin >> filas;
    cout << "Ingrese la nota de los cinco examenes a evaluar" << endl;

    
        vector<vector<float>> Alumnos(filas, vector<float>(columnas, 0.0));

        //guardar notas

        for (int i=0; i <filas; i++){
            for (int j=0; j <columnas; j++){
              float Nota = Alumnos[i][j] = ValidarNota("Ingrese la nota del estudiante #" + to_string(i + 1) + ", examen #" + to_string(j + 1) + ": ");

            }
        }
}

