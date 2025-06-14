#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;


//Hacemos una estructura para almacenar los datos de un estudiante
struct Estudiante {

    string nombre;
    string apellido1;
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
//hacemos una función pra validar una respuesta ingresando 1 o 2
int leerOpcion(const string & mensaje) {
    int opcion;
    while (true) {
        cout << mensaje;
        cin >> opcion;
        if (cin.fail() || (opcion != 1 && opcion != 2)) {
            cout << "Error: Por favor, ingrese 1 o 2." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return opcion;
        }
    }
}
            
//Hacemos funcion que nos permita imprimir un encabezado con estilo colorido
void imprimirEncabezado(int numero) {
    cout << "\n\x1B[34m======== Ingreso de  datos de los estudiantes #" << numero << " ========\x1B[0m\n";

}
//Empezamos la funcion principal
int main() {
    vector<Estudiante>estudiantes;
    int cantidadMaxima =
    leerEnteroPositivo("Cuantos alumnos desea evaluar en total?");
    int contador = 0;

    while (contador < cantidadMaxima){
        imprimirEncabezado(contador + 1);
        Estudiante est;

        cout << "Ingrese primer nombre: ";
        cin >> est.nombre;


        cout << "Ingrese primer apellido: ";
        cin >> est.apellido1;

        cout << "Ingrese segundo apellido: ";
        cin >> est.apellido2; 

        est.ciclo = leerEnteroPositivo ("Ingrese ciclo de estudio (numero entero > 0): ");
        est.cedula = leerEnteroPositivo ("Ingrese numero de cedula (sin guiones): ");

        cout << "Ingrese las 5 calificaciones de examenes: \n";
        for (int j = 1; j <= 5; ++j){
            float nota = leerNotaValida ("Nota del examen #" + to_string(j) + ":");
            est.notas.push_back(nota);
        }
    

float suma = 0;
for (float nota:est.notas){
    suma+=nota;
}
est.promedio=suma/est.notas.size();
estudiantes.push_back(est);
contador++; 
    }

vector<Estudiante> aprobados, reprobados;
for (const Estudiante& e:estudiantes){
    if (e.promedio >=70.0) {
        aprobados.push_back(e);
    }
    else {
        reprobados.push_back(e);
    }
}

cout<<"\n\x1B[31m====================APROBADOS====================\x1B[0m\n";
cout<< left<<setw(25)<<"Nombre completo"
<<setw(10)<<"Ciclo"
<<setw(15)<<"Cedula"
<<setw(10)<<"Promedio\n";
cout << "--------------------------------------------------\n";


for(const Estudiante& e:aprobados){
cout <<">"<< left
<<setw(25)<<(e.nombre+""+e.apellido1+""+e.apellido2)
<<setw(10)<<e.ciclo
<<setw(15)<<e.cedula
<<fixed<<setprecision(2) <<e.promedio<<"\n";
}


cout<<"\n===================REPROBADOS===================\x1B[0m\n";
cout <<left<< setw(25)<<"Nombre completo "
<<setw(10)<<"Ciclo"
<<setw(15)<<"Cedula"
<<setw(10)<<"Promedio\n";
cout <<"--------------------------------------------------\n";
for(const Estudiante& e:reprobados){
    cout<<">"<<left
    <<setw(25)<<(e.nombre+""+e.apellido1+""+e.apellido2)
    <<setw(10)<<e.ciclo
    <<setw(10)<<e.cedula
    <<fixed<<setprecision(2)<<e.promedio<<"\n";

    return 0;
}

}

