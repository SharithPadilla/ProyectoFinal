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

void imprimirReporte(const vector<Alumno>& lista, string estado) {
    cout << "\n==================== " << estado << " ====================\n";
    cout << "Nombre completo          Ciclo    Cédula       Promedio\n";
    cout << "----------------------------------------------------------\n";
    for (const auto & alumno : lista) {
        if (alumno.estado == estado) {
            cout << "> " << alumno.nombre << " " << alumno.primerApellido << " " << alumno.segundoApellido;
            cout << "   (" << alumno.ciclo << ")     " << alumno.cedula << "     ";
            cout << fixed << setprecision(2) << alumno.promedio << endl;
        }
    }
}

int main (){


    cout << "========================================" << endl;
    cout << "Bienvenido al sistema de evaluacion de alumnos" << endl;
    cout << "========================================" << endl;

    float promedio;
    int filas;
    int columnas =5;
    int suma =0;
    

     int N = Validarentrada ("¿Cuántos alumnos desea evaluar?"); 
     cin >> filas;
    
     vector<Alumno> alumnos;
    
     for (int i = 0; i < N; ++i) {
        cout << "\n===== Ingreso de datos del estudiante #" << (i + 1) << " =====\n";

        Alumno a;
        cout << "Ingrese primer nombre: ";
        cin >> a.nombre;

        cout << "Ingrese primer apellido: ";
        cin >> a.primerApellido;

        cout << "Ingrese segundo apellido: ";
        cin >> a.segundoApellido;

        a.ciclo = Validarentrada("Ingrese ciclo de estudio: ");
        a.cedula = Validarentrada("Ingrese número de cédula: ");

      
    }
        cout << "Ingrese la nota de los cinco examenes a evaluar" << endl;

        vector<vector<float>> notasMatrix(filas, vector<float>(columnas, 0.0));
        
        //guardar notas

        for (int i=0; i <filas; i++){
            for (int j=0; j <columnas; j++){
              float Nota = notasMatrix[i][j] = ValidarNota("Ingrese la nota del estudiante #" + to_string(i + 1) + ", examen #" + to_string(j + 1) + ": ");

              for (int i = 0; i < N; i++) {
                
            Alumno a;
            float suma = 0;
                for (int j = 0; j < 5; ++j) {
            a.notas.push_back(Nota);
            suma += Nota;
            }

        a.promedio = suma / 5.0;
        if (a.promedio >= 70.0) {
             a.estado = "APROBADOS";
        } else {
            a.estado = "REPROBADOS";
        }


alumnos.push_back(a); 
        }
    }
}

imprimirReporte(alumnos, "APROBADOS");
imprimirReporte(alumnos, "REPROBADOS");

    return 0;
}

