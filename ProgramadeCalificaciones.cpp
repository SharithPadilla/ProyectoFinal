#include <iostream> 
#include <vector>
#include <limits> 
#include <windows.h>
using namespace std;


int main (){
    string Nombre;
    string PrimerApellido;
    string SegundoApellido;
    string Ciclo;
    int NCedula;
    float suma=0;
    int Alumnos [100],n;
    double Promedio; 

do {

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "¿Cuántos alumnos desea evaluar?" << endl;
    cin >> n;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    if (n <= 0){
        cout << "Numero no valido. Por favor ingrese un numero mayor que cero." << endl;
    }   
 } while (n <= 0 );
  

    //for (int i=0; i<n; i++){
        //cout << "Dijite el nombre completo del estudiante" << endl;
       // getline (cin, Nombre);
       // cout << "Dijite los apellidos del estudiante" << endl;
   // }  

for (int i=0; i<n; i++){
    cout << "¿Ingrese primer nombre?" << endl;
     cin >> Nombre;
    cout << "¿Ingrese primer apellido?" << endl;
     cin >> PrimerApellido;
    cout << "¿Ingrese segundo apellido?" << endl;
     cin >> SegundoApellido ;
    cout << "¿Ingrese ciclo de estudio?" << endl;
     cin >> Ciclo;
    cout << "¿Ingrese número de cédula?" << endl;
     cin >> NCedula;
}

    //cout << "La cantidad de Alumnos ingresados son: " << Alumnos; 

    
    if (NCedula <= 0){
        cout << "Numero no valido. Por favor ingrese un numero mayor que cero." << endl;
    }

    return 0;
}
